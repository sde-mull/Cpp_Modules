/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:09:41 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/06 15:40:12 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << B_GREEN " default summon" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << B_MAGENTA << name << B_GREEN " parametric summon 🏴‍☠️" RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << B_MAGENTA << this->_name << B_RED " was defeated 💀" RESET << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
    std::cout << B_YELLOW "ClapTrap copy constructor called" RESET << std::endl;
    *this = src;

    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << B_YELLOW "ClapTrap copy assignment operator called" RESET << std::endl;
    this->_attackDamage = rhs.get_attack_damage();
    this->_energyPoints = rhs.get_energy_points();
    this->_hitPoints = rhs.get_hit_points();
    this->_name = rhs.get_name();
    
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap ";
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

void ClapTrap::stats(void)
{
    std::cout << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    if (this->_hitPoints > 0)
    {
        std::cout << B_CYAN "NAME: " << B_MAGENTA << this->_name << RESET << std::endl;
        std::cout << B_CYAN "HP: " << B_MAGENTA << this->_hitPoints << RESET <<     std::endl;
        std::cout << B_CYAN "ENERGY: " << B_MAGENTA << this->_energyPoints << RESET <<  std::endl;
        std::cout << B_CYAN "ATTACK_DAMAGE: " << B_MAGENTA << this->_attackDamage << RESET <<   std::endl;
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << std::endl;
        return ;
    }
    std::cout << B_YELLOW "Summoner already out of combat" << RESET << std::endl;
}

void ClapTrap::get_weapon(unsigned int amount)
{
    if (amount > this->_attackDamage)
        std::cout << B_MAGENTA << this->_name << B_YELLOW " damage increased to " B_GREEN << amount << " 🗡" RESET << std::endl;
    else if (amount < this->_attackDamage)
        std::cout << B_MAGENTA << this->_name << B_YELLOW  " damage decreased to " B_RED << amount << " 🗡" RESET << std::endl;
    else 
        std::cout << B_MAGENTA << this->_name << B_YELLOW " damage is the same 🗡" RESET << std::endl;
    this->_attackDamage = amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;

    if (this->_hitPoints <= 0)
    {
        std::cout << B_MAGENTA << this->_name << B_RED " was defeated 💀" RESET << std::endl;
        return ;
    }
    std::cout << B_MAGENTA << this->_name << B_YELLOW " got hit by " B_RED << amount << B_YELLOW " damage 💥" << std::endl;
}

unsigned int ClapTrap::get_attack_damage(void) const 
{
    return (this->_attackDamage);
}

int    ClapTrap::get_energy_points(void) const
{
    return (this->_energyPoints);
}

int    ClapTrap::get_hit_points(void) const
{
    return (this->_hitPoints);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
     if (this->_hitPoints <= 0)
    {
        std::cout << B_MAGENTA << this->_name << B_RED " was already defeated and can't be repaired 💀" RESET << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
         std::cout << B_MAGENTA << this->_name << B_RED " has no energy to be repaired 🫠" RESET << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    std::cout << B_MAGENTA << this->_name << B_GREEN " recovered " << amount << " of HP 🥤" RESET << std::endl;
}

std::string ClapTrap::get_name(void) const
{
    return (this->_name);
}

int    ClapTrap::death(void)
{
    if (this->_hitPoints < 0)
        return (0);
    return (1);
}

void    ClapTrap::setAttributes(std::string name, int hitPoints, int energyPoints, unsigned int atackDamage)
{
    this->_name = name;
    this->_hitPoints = hitPoints;
    this->_energyPoints = energyPoints;
    this->_attackDamage = atackDamage;
}