/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:22 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 19:51:48 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "";
    std::cout << "PresidentialPardonForm Default Constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardon", 25, 5)
{
    this->_target = target;
    std::cout << target << " PresidentialPardonForm Constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src): AForm(src), _target(getTarget())
{
    std::cout << "PresidentialPardonForm Clonned!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    if (this != &rhs)
       this->_target = rhs.getTarget();

    return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void PresidentialPardonForm::message(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}