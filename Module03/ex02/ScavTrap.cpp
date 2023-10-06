/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:24:05 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/06 15:36:00 by sde-mull         ###   ########.fr       */
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

ScavTrap::ScavTrap( ScavTrap const & src): ClapTrap(src)
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

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap ";
    if (this->_hitPoints <= 0)
    {
        std::cout << B_MAGENTA << this->_name << B_RED " was already defeated and can't attack 💀" RESET << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << B_MAGENTA << this->_name << B_YELLOW " has no energy to attack 🫠" RESET << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << B_MAGENTA << this->_name << B_GREEN " attacks " 
    << B_MAGENTA << target << B_GREEN " causing " << B_RED << this->_attackDamage 
    << B_GREEN " points of damage 🩸" RESET << std::endl;
}