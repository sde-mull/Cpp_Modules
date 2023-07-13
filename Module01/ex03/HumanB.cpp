/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:05:53 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 22:24:34 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void)
{
	std::cout << RED "HumanB destructor called" RESET << std::endl;
}

HumanB::HumanB(std::string weapon) : name(weapon)
{
	std::cout << GREEN "HumanB parametric constructor called" RESET << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";

	if (this->gun)
		std::cout << this->gun->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->gun = &weapon;
}