/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:59:57 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 13:28:21 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define MAGENTA		"\033[35m"
#define CYAN		"\033[36m"
#define WHITE		"\033[37m"
#define RESET		"\033[0m"

#define B_BLACK		"\033[1;30m"
#define B_RED		"\033[1;31m"
#define B_GREEN		"\033[1;32m"
#define B_YELLOW	"\033[1;33m"
#define B_BLUE		"\033[1;34m"
#define B_MAGENTA	"\033[1;35m"
#define B_CYAN		"\033[1;36m"
#define B_WHITE		"\033[1;37m"
#define RESET		"\033[0m"

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie  *newZombie(std::string name);
void	randomChump(std::string name);

#endif