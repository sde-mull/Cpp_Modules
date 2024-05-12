/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:16:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/12 18:49:50 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name(""), _sign(false), _gradeSign(0), _gradeExecute(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << name << " AForm parametric constructor called" << std::endl;
	if (gradeSign >= 151 || gradeExecute >= 151)
		throw GradeTooLowException();
	else if (gradeSign <= 0 || gradeExecute <= 0)
		throw GradeTooHighException();							
}

AForm::~AForm(void)
{
	std::cout << this->_name << " AForm destructor called" << std::endl;
}

AForm::AForm(AForm const &src) : _gradeSign(src.getGradeSign()), _gradeExecute(getGradeExecute())
{
	std::cout << src.getName() << " AForm copy constructor called" << std::endl;
	*this = src;
}

AForm & AForm::operator=(AForm const &rhs)
{
	if (this != &rhs){
		this->_sign = rhs.getSign();
		const_cast<std::string&>(this->_name) = rhs.getName();
		const_cast<int&>(this->_gradeSign) = rhs.getGradeSign();
		const_cast<int&>(this->_gradeExecute) = rhs.getGradeExecute();
	}
	return *this;
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getSign(void) const
{
	return (this->_sign);
}

int	AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int	AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const char* AForm::GradeTooLowToSignException::what() const throw()
{
	return ("The grade is not enough to sign!");
}

const char* AForm::FormIsAlreadySignedException::what() const throw()
{
	return ("The Form is already signed!");
}

const char* AForm::FormIsNotSignedException::what() const throw()
{
	return ("The Form is not signed!");
}

void			AForm::beSigned(Bureaucrat &bureau)
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

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << "Form name: " << form.getName() << std::endl;
	os << "Form sign: " << form.getSign() << std::endl;
	os << "Form grade to sign: " << form.getGradeSign() << std::endl;
	os << "Form grade to Execute: " << form.getGradeExecute() << std::endl;
	return (os);
}

void			AForm::execute(Bureaucrat const &executor) const
{
	if (this->_sign && this->_gradeExecute > executor.getGrade())
	{
		std::cout << executor.getName() << " executed " << getName() << std::endl;
		
	}
	else
	{
		std::cout << "Execute Failed!!!" << std::endl;
		if (this->_gradeExecute < executor.getGrade())
			throw GradeTooLowException();
		else if (!this->_sign)
			throw FormIsNotSignedException();
	}
}