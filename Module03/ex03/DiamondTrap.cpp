/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:10:32 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/08 18:29:24 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap()
{
    std::cout << "DiamondTrap " << B_GREEN "default summon" RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{	
    std::cout << "DiamondTrap" << B_MAGENTA << this->_name << B_GREEN " parametric summon" RESET << std::endl;
	this->_hitPoints = FragTrap::get_hit_points();
	this->_energyPoints = ScavTrap::get_energy_points();
	this->_attackDamage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap( DiamondTrap const & src): ClapTrap(src)
{
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << B_MAGENTA << this->get_name() << B_YELLOW "default was defeated" RESET << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    if (this != &rhs)
    {
        this->setAttributes(rhs.get_name(), rhs.get_hit_points(), rhs.get_energy_points(), rhs.get_attack_damage());
    }
    return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "This is my name " <<  this->ClapTrap::get_name() << " but you can call me " << this->_name << std::endl;
}