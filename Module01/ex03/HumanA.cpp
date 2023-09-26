/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:05:06 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 16:18:23 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void)
{
	std::cout << RED "HumanA destructor called" RESET << std::endl;
}

HumanA::HumanA(std::string name, Weapon& gun) : _name(name), _gun(gun)
{
	std::cout << GREEN "HumanA parametric constructor called" RESET << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_gun.getType() << std::endl;
}