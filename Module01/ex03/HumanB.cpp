/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:05:53 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 16:27:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void)
{
	std::cout << RED "HumanB destructor called" RESET << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_gun = NULL;
	std::cout << GREEN "HumanB parametric constructor called" RESET << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their ";

	if (this->_gun)
		std::cout << this->_gun->getType();
	else
		std::cout << "rock?";
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_gun = &weapon;
}