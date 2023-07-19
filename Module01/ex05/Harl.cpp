/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:03:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/18 16:51:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << 
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
	<< std::endl;
}

void    Harl::info(void) {
    std::cout << 
	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
	<< std::endl;
}

void    Harl::warning(void) {
    std::cout << 
	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void    Harl::error(void) {
    std::cout << 
	"This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}

void    Harl::complain( std:: string level ) {
	
    void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
		
    std::string levels[4] = { 
	"DEBUG", 
	"INFO", 
	"WARNING", 
	"ERROR",
	};
	for (int index = 0; index < 4; index++)
		if (!levels[index].compare(level))
			(this->*functions[index])(); 
}