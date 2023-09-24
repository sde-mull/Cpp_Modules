/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:16:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/24 23:04:47 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _sign(false), _gradeSign(0), _gradeExecute(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _sign(false), \
																_gradeSign(gradeSign), \
																_gradeExecute(gradeExecute)
{
	std::cout << "Form parametric constructor called" << std::endl;
	if (gradeSign >= 151 || gradeExecute >= 151)
		throw GradeTooLowException();
	else if (gradeSign <= 0 || gradeExecute <= 0)
		throw GradeTooHighException();							
}

Form::~Form(void)
{
	std::cout << this->_name << " form destructor called" << std::endl;
}

Form::Form(Form const &src) : _name(this->getName()), \
							  _sign(this->getSign()), \
							  _gradeSign(this->getGradeSign()), \
							  _gradeExecute(this->getGradeExecute())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form & Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_sign = rhs.getSign();
	return *this;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSign(void) const
{
	return (this->_sign);
}

int	Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int	Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const char* Form::GradeTooLowToSignException::what() const throw()
{
	return ("The grade is not enough to sign!");
}

const char* Form::FormIsAlreadySignedException::what() const throw()
{
	return ("The Form is already signed!");
}

void			Form::beSigned(Bureaucrat &bureau)
{
	if (this->_sign)
	{
		bureau.signForm(this->_name, false, "this form is already signed! ");
		throw FormIsAlreadySignedException();
	}
	else if (this->_gradeSign < bureau.getGrade())
	{
		bureau.signForm(this->_name, false, "this form requires a higher grade to be signed! ");
		throw GradeTooLowException();
	}
	else
	{
		bureau.signForm(this->_name, true, "");
		this->_sign = true;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form name: " << form.getName() << std::endl;
	os << "Form sign: " << form.getSign() << std::endl;
	os << "Form grade to sign: " << form.getGradeSign() << std::endl;
	os << "Form grade to Execute: " << form.getGradeExecute() << std::endl;
	return (os);
}

