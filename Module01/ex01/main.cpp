/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:00:13 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 15:00:47 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(5, "FTW");

	if (zombies == NULL)
        return (1);

	for (int i = 0; i < 5; i++)
	{
		std::cout << B_CYAN << i << ": " RESET;
		zombies[i].announce();
	}
	std::cout << B_RED "Horde of zombies are comming!!!! RUNNNNN!!!!!" RESET << std::endl;
	std::cout << B_CYAN "Sadly the zombies devoured them all and started deteriorating" RESET << std::endl;
	delete[] zombies;
	return(0);
}