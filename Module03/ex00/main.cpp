/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:08:19 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/06 13:17:04 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <stdlib.h> 

void	options(unsigned int player)
{
	std::cout << B_MAGENTA "                     Player: " << player + 1 << RESET << std::endl;
	std::cout << B_WHITE "|-------------------------------------------------|" RESET << std::endl;
	std::cout << B_WHITE "|                                                 |" RESET << std::endl;
	std::cout << B_WHITE "|   1. Attack                   2.Repair          |" RESET << std::endl;
	std::cout << B_WHITE "|                                                 |" RESET << std::endl;
	std::cout << B_WHITE "|   3. Status                   4.Exit            |" RESET << std::endl;
	std::cout << B_WHITE "|                                                 |" RESET << std::endl;
	std::cout << B_WHITE "|-------------------------------------------------|" RESET << std::endl;
	std::cout << std::endl;
	std::cout << B_BLUE "Enter the number: " RESET;
}

int main(void)
{	
	system("clear");
	ClapTrap player1("Monkey D. Luffy");
    ClapTrap player2("Roronoa Zoro");

	std::string choices;
	unsigned int index;
	unsigned int player;

	player = 0;
	while (player != 3)
	{
		if (player == 2)
			player = 0;
		options(player);
		std::getline(std::cin, choices);
		if (choices.find_first_not_of("0123456789") == std::string::npos)
		{
			index = std::atoi(choices.c_str());
			if (index > 0 && index < 5)
			{
				if (index == 1)
				{
					if (player == 0)
					{
						player1.attack("Roronoa Zoro");
						player2.takeDamage(player1.get_attack_damage());
					}
					else
					{
						player2.attack("Monkey D. Luffy");
						player1.takeDamage(player2.get_attack_damage());
					}
					player++;
				}
				else if (index == 2)
				{
					if (player == 0)
						player1.beRepaired(2);
					else
						player2.beRepaired(2);
					player++;
				}
				else if (index == 3)
				{
					if (player == 0)
						player1.stats();
					else
						player2.stats();
				}
				else if (index == 4)
					player = 3;
			}
			else
				std::cout << B_YELLOW "Wrong input, it must be an integer between 1 and 4" RESET << std::endl; 
		}
		else
			std::cout << B_YELLOW "Wrong input, it must be an integer between 1 and 4" RESET << std::endl; 
		std::cout << std::flush;
	}
	return (0);
}
