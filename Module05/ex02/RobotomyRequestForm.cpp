/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:59:11 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 20:04:00 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "";
    std::cout << "RobotomyRequestForm Constructor!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
    std::cout << "RobotomyRequestForm Constructor!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src): AForm(src), _target(getTarget())
{
    std::cout << "RobotomyRequestForm Clonned!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    if (this != &rhs)
        this->_target = rhs.getTarget();

    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void RobotomyRequestForm::message(void) const
{
	std::cout << "* Makes some drilling noises *" << std::endl;
    std::srand(time(NULL));
    if (std::rand() % 2)
        std::cout << this->_target << " has been robotomized!" << std::endl;
    else
    {
        std::cout << this->_target << ", robotomy failed!" << std::endl;
    }
}