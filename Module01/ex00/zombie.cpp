/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:00:05 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/22 18:07:32 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << GREEN "Zombie constructor called" RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << B_MAGENTA << this->_name << YELLOW ": Zombie destructor called" RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << B_BLUE << this->_name << RESET << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}