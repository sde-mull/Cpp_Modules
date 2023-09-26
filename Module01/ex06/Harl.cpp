/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:03:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 17:34:49 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
	 std::cout << "[ DEBUG ]" << std::endl;
    std::cout << 
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
	<< std::endl;
}

void    Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
    std::cout << 
	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
	<< std::endl;
}

void    Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << 
	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void    Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << 
	"This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}

Harl::Harl(void)
{
		this->fun[0] = &Harl::debug;
		this->fun[1] = &Harl::info;
		this->fun[2] = &Harl::warning;
		this->fun[3] = &Harl::error;
		std::cout << "Harl default constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called" << std::endl;
}

void	Harl::print_level(int i)
{
	func f;

	while (i < 4)
	{
		f = this->fun[i++];
		(this->*f)();
		
	}
}

void    Harl::complain( std:: string level ) {

	int index;

    std::string levels[4] = { 
	"DEBUG", 
	"INFO", 
	"WARNING",
	"ERROR",
	};
	for (index = 0; index < 4; index++)
		if (!levels[index].compare(level))
			break;
	switch(index)
	{
		case 0:
			print_level(0);
			break ;
		case 1:
			print_level(1);
			break ;
		case 2:
			print_level(2);
			break ;
		case 3:
			print_level(3);
			break ;
		default:
        	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	};
}