/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:44 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:37 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Parametric constructor called" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Bureaucrat grade needs to be less than 0");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Bureaucrat grade needs to be higher than 151");
}

void    Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
    this->_grade -= 1;
}

void    Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 < 1)
		throw GradeTooLowException();
    this->_grade += 1;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

void	Bureaucrat::signForm(std::string const formName, bool sign)
{
	std::cout << this->_name << " has to sign the " << formName << std::endl;

	if (!sign)
		std::cout << formName << " Signed!" << std::endl;
	else
	{
		if (sign)
			std::cout << formName << " couldn't be signed because the document was already signed :(" << std::endl;
		else
			std::cout << formName << " couldn't be signed because the grade is too low :(" << std::endl;
	}
}