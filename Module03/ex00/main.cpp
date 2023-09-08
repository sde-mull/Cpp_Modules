/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:08:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/07 16:21:38 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{	
	ClapTrap summoner_1("ZEUS");
	ClapTrap summoner_2("POSEIDON");

	summoner_1.stats();
	summoner_2.stats();

	summoner_1.get_weapon(20);
	summoner_1.get_weapon(2);
	summoner_1.get_weapon(2);

	if (summoner_1.get_energy_points() > 0 && summoner_2.get_hit_points() > 0)
	{
		summoner_1.attack("POSEIDON");
		summoner_2.takeDamage(summoner_1.get_attack_damage());
	}
	else
		std::cout << B_YELLOW "Summoner_1 is out of energy or summoner_2 doesnt have any hp left" RESET << std::endl;


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

	summoner_2.beRepaired(2);
	summoner_2.beRepaired(2);

	summoner_1.stats();
	summoner_2.stats();

	return (0);
}


// std::string choices;

// 	system("clear");
// 	while (1)
// 	{
// 		book.Menu();
// 		std::getline(std::cin, choices);
// 		if (!choices.compare("ADD"))
// 			book.Add();
// 		else if (!choices.compare("SEARCH"))
// 			book.Search();
// 		else if (!choices.compare("EXIT"))
// 			break;
// 		else
// 			std::cout << B_RED "Wrong option try again!" RESET << std::endl;
// 		std::cout << std::flush;
// 	}