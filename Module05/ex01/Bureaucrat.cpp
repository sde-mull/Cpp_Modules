/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:44 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/24 22:57:29 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	else if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << " Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
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
	return ("The grade is too high!!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

void    Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
    this->_grade -= 1;
}

void    Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
    this->_grade += 1;
}

void	Bureaucrat::signForm(std::string name, bool sign, std::string reason) const
{
	std::cout << this->_name << ":" << std::endl;
	if (sign)
		std::cout << name << " signed!" << std::endl;
	else
		std::cout << name << " couldn't be signed because " << reason << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}