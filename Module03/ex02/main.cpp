/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:08:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/07 20:01:55 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{	
	ClapTrap summoner_1("ZEUS");
	ScavTrap summoner_2("POSEIDON");
	FragTrap summoner_3("ARTEMIS");

	summoner_1.stats();
	summoner_2.stats();
	summoner_3.stats();

	if (summoner_1.get_energy_points() > 0 && summoner_2.get_hit_points() > 0)
	{
		summoner_1.attack("POSEIDON");
		summoner_2.takeDamage(summoner_1.get_attack_damage());
	}
	else
		std::cout << B_YELLOW "Summoner_1 is out of energy or summoner_2 doesnt have any hp left" RESET << std::endl;


	summoner_1.stats();
	summoner_2.stats();
	summoner_3.stats();
	
	summoner_2.guardGate();

	if (summoner_1.get_energy_points() > 0 && summoner_2.get_hit_points() > 0)
	{
		summoner_1.attack("POSEIDON");
		summoner_2.takeDamage(summoner_1.get_attack_damage());
	}
	else
		std::cout << B_YELLOW "Summoner_1 is out of energy or summoner_2 doesnt have any hp left" RESET << std::endl;
	
	summoner_1.stats();
	summoner_2.stats();
	summoner_3.stats();

	summoner_2.beRepaired(2);
	summoner_2.beRepaired(2);

	summoner_3.highFivesGuys();

	summoner_1.stats();
	summoner_2.stats();
	summoner_3.stats();

	return (0);
}
