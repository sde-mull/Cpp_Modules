/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:24:05 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/06 14:02:18 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << B_MAGENTA << this->get_name() << B_GREEN " default protection summoned!" RESET << std::endl;
	this->setAttributes(this->get_name(), 100, 50, 20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << B_MAGENTA << this->get_name() << B_GREEN " parametric protection was summoned!" RESET << std::endl;
	this->setAttributes(this->get_name(), 100, 50, 20);
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << B_MAGENTA << this->get_name() << B_YELLOW " protection is off" RESET << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

void ScavTrap::guardGate(void)
{
    std::cout << B_MAGENTA << this->get_name() << B_CYAN << " is now in Gate keeper mode." RESET << std::endl;
}