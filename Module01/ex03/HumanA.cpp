/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:05:06 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 22:21:00 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void)
{
	std::cout << RED "HumanA destructor called" RESET << std::endl;
}

HumanA::HumanA(std::string weapon, Weapon& gun) : name(weapon), gun(gun)
{
	std::cout << GREEN "HumanA parametric constructor called" RESET << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}