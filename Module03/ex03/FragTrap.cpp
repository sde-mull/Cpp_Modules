/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:44:04 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/06 15:34:53 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap " << B_MAGENTA << this->get_name() << B_GREEN " default high-five" RESET << std::endl;
	this->setAttributes(this->get_name(), 100, 100, 30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap " << B_MAGENTA << this->get_name() << B_GREEN " parametric high-five" RESET << std::endl;
	this->setAttributes(this->get_name(), 100, 100, 30);
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << B_MAGENTA << this->get_name() << B_YELLOW " Said no more high-five" RESET << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << B_MAGENTA << this->get_name() << B_CYAN << " is requesting for a high-five" RESET << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap ";
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