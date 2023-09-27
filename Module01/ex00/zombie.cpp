/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:00:05 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 14:56:56 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("")
{
	std::cout << GREEN "Zombie default constructor called" RESET << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << B_MAGENTA << name << GREEN ": Zombie parametric constructor called" RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << B_MAGENTA << this->_name << YELLOW ": Zombie destructor called" RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << B_BLUE << this->_name << RESET << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}