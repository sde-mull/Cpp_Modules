/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:10:32 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/08 16:59:26 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap()
{
    std::cout << B_GREEN " Diamond!" RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{	
    std::cout << B_MAGENTA << this->_name << B_GREEN " Diamond summmoneed" RESET << std::endl;
	this->_hitPoints = FragTrap::get_hit_points();
	this->_energyPoints = ScavTrap::get_energy_points();
	this->_attackDamage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap( DiamondTrap const & src): ClapTrap(src)
{
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << B_MAGENTA << this->get_name() << B_YELLOW " Diamond" RESET << std::endl;
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
	std::cout << this->_name << std::endl;
	std::cout <<  this->ClapTrap::get_name() << std::endl;
}