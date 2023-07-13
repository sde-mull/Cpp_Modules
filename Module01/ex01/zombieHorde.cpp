/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:27:38 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 09:18:03 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies;
	
	if (N < 0)
		return (NULL);
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name(name);
		std::cout << B_MAGENTA << i + 1 << ": " B_GREEN "zombie " + name + " created successfully" RESET << std::endl;
	}
	return (zombies);
}