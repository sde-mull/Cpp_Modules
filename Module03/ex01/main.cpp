/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:08:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/07 19:38:06 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{	
	ClapTrap summoner_1("ZEUS");
	ScavTrap summoner_2("POSEIDON");

	summoner_1.stats();
	summoner_2.stats();

	if (summoner_1.get_energy_points() > 0 && summoner_2.get_hit_points() > 0)
	{
		summoner_1.attack("POSEIDON");
		summoner_2.takeDamage(summoner_1.get_attack_damage());
	}
	else
		std::cout << B_YELLOW "Summoner_1 is out of energy or summoner_2 doesnt have any hp left" RESET << std::endl;


	summoner_1.stats();
	summoner_2.stats();
	
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

	summoner_2.beRepaired(2);
	summoner_2.beRepaired(2);

	summoner_1.stats();
	summoner_2.stats();

	return (0);
}
