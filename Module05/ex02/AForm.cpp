/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:27:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 20:00:24 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name(""), _sign(0), _gradeToExecute(1), _gradeToSign(1)
{
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _sign(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << name << " Parametric constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (GradeTooLowException());
}

AForm::~AForm(void)
{
	std::cout << this->_name << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const &src) : 	_name(src.getName()), 
								_sign(src.getSign()), 
								_gradeToSign(src.getGradeToSign()), 
								_gradeToExecute(src.getGradeToExecute())
{
	std::cout << "AForm Copy constructor called" << std::endl;
	std::cout << "Copied " << src.getName() << " sucessfully" << std::endl;
}

AForm & AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
		this->_sign = rhs.getSign(); 
	return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Error: AForm grade needs to be less than 0");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Error: AForm grade needs to be higher than 151");
}

const char* AForm::GradeIsNotSignedException::what() const throw()
{
	return ("Error: Bureaucrat form is not signed yet");
}

std::string const AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSign() const
{
	return (this->_sign);
}

int		const AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int		const AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat &bureau)
{
	if (!this->_sign)
	{
		if (this->_gradeToExecute >  bureau.getGrade())
			if (this->_gradeToSign >  bureau.getGrade())
			{
				bureau.signAForm(this->_name, this->_sign);
				this->_sign = 1;
			}
	}
	else
	{
		bureau.signAForm(this->_name, this->_sign);
		throw(GradeTooLowException());
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << "AForm Name: " << AForm.getName() << std::endl;
	os << "AForm sign: " << AForm.getSign() << std::endl;
	os << "AForm grade to sign: " << AForm.getGradeToSign() << std::endl;
	os << "AForm grade to execute: " << AForm.getGradeToExecute() << std::endl;

	return (os);
}

void	AForm::execute(Bureaucrat const & bureau) const
{
	message();
	bureau.executeForm(*this);
}