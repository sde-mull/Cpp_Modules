/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:59:20 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/25 02:36:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "";
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :	AForm("RobotomyRequestForm", 72, 45), 	_target(target)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->getName() << "destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(getTarget())
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    if (this != &rhs)
	{
        AForm::operator=(rhs);
		this->_target = rhs.getTarget();
	}

    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::task() const
{
	std::string noises = "* drilling noises *";
	std::cout << noises << std::endl;
	struct timeval tm;
	gettimeofday(&tm, NULL);
	srandom(tm.tv_usec % 1000);
	int num = rand() % 100;
	if (num > 50)
		std::cout << _target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << _target << " Robotomy has failed." << std::endl;
}