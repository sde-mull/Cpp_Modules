/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:08:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/08 16:50:48 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{	
	FragTrap player1("Super_Gustavo");
    ScavTrap player2("Super_FelisBerto");
    DiamondTrap player3("GOKU");

    std::cout << std::endl;
    player3.whoAmI();

    std::cout << std::endl << "Turn 1:" << std::endl << std::endl;
    player3.highFivesGuys();
    player1.highFivesGuys();
    player2.guardGate();
    player3.guardGate();

    std::cout << std::endl << "Turn 2:" << std::endl << std::endl;
    player3.attack(player1.get_name());
    player1.takeDamage(player3.get_attack_damage());
    player2.attack(player3.get_name());
    player3.takeDamage(player2.get_attack_damage());
    player1.attack(player3.get_name());
    player3.takeDamage(player1.get_attack_damage());

    std::cout << std::endl << "Turn 3:" << std::endl << std::endl;
    player3.attack(player1.get_name());
    player1.takeDamage(player3.get_attack_damage());
    player2.attack(player3.get_name());
    player3.takeDamage(player2.get_attack_damage());
    player1.attack(player3.get_name());
    player3.takeDamage(player1.get_attack_damage());

    std::cout << std::endl << "Turn 4:" << std::endl << std::endl;
    player1.attack(player2.get_name());
    player2.takeDamage(player1.get_attack_damage());
    player2.attack(player1.get_name());
    player1.takeDamage(player2.get_attack_damage());

    std::cout << std::endl << player2.get_name() << " is the Winner!" << std::endl << std::endl;

	return (0);
}
