/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:07:56 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 12:14:01 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << GREEN "Weapon default constructor called" RESET << std::endl;
}

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << GREEN "Weapon parametric constructor called" RESET << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << RED "Weapon destructor called" RESET << std::endl;
}

std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}