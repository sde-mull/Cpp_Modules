/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:27:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:07 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _sign(0), _gradeToExecute(1), _gradeToSign(1)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _sign(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << name << " Parametric constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (GradeTooLowException());
}

Form::~Form(void)
{
	std::cout << this->_name << "Form destructor called" << std::endl;
}

Form::Form(Form const &src) : 	_name(src.getName()), 
								_sign(src.getSign()), 
								_gradeToSign(src.getGradeToSign()), 
								_gradeToExecute(src.getGradeToExecute())
{
	std::cout << "Form Copy constructor called" << std::endl;
	std::cout << "Copied " << src.getName() << " sucessfully" << std::endl;
}

Form & Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_sign = rhs.getSign(); 
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: Form grade needs to be less than 0");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: Form grade needs to be higher than 151");
}


std::string const Form::getName() const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_sign);
}

int		const Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int		const Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat &bureau)
{
	if (!this->_sign)
	{
		if (this->_gradeToExecute >  bureau.getGrade())
			if (this->_gradeToSign >  bureau.getGrade())
			{
				bureau.signForm(this->_name, this->_sign);
				this->_sign = 1;
			}
	}
	else
	{
		bureau.signForm(this->_name, this->_sign);
		throw(GradeTooLowException());
	}
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form Name: " << form.getName() << std::endl;
	os << "Form sign: " << form.getSign() << std::endl;
	os << "Form grade to sign: " << form.getGradeToSign() << std::endl;
	os << "Form grade to execute: " << form.getGradeToExecute() << std::endl;

	return (os);
}