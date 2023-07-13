/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:00:13 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 09:26:00 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(5, "Brian");

	if (zombies == NULL)
        return (1);

	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	std::cout << B_RED "Horde of zombies are comming!!!! RUNNNNN!!!!!" RESET << std::endl;
	std::cout << B_CYAN "Sadly the zombies devoured them all and started deteriorating" RESET << std::endl;
	delete[] zombies;
	return(0);
}