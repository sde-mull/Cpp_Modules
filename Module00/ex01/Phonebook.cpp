/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:02 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/03 22:47:38 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	current_index = 0;
	std::cout << GREEN"Phonebook constructor called"RESET << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << YELLOW"Phonebook destructor called"RESET << std::endl;
}

void	PhoneBook::Menu(void)
{
	std::cout << BLUE "/************************************************************\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*" B_CYAN "                       PHONEBOOK                          " BLUE "*\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*" "         " B_MAGENTA "1." RESET CYAN "ADD          " RESET;
	std::cout << B_MAGENTA "2." RESET CYAN "SEARCH          " RESET;
	std::cout << B_MAGENTA"3." RESET CYAN  "EXIT          " BLUE "*\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/*                                                          *\\" RESET << std::endl;
	std::cout << BLUE "/************************************************************\\\n" RESET << std::endl;
	std::cout << B_CYAN "Type ADD, SEARCH or EXIT: " RESET;
}

void	PhoneBook::Add(void)
{
	Contact 		tmp;
	std::string		str;
	
	str = tmp.ask_information("What is your first name? ");
	tmp.ask_first_name(str);
	str = tmp.ask_information("What is your last name? ");
	tmp.ask_last_name(str);
	str = tmp.ask_information("What is your nickname? ");
	tmp.ask_nickname(str);
	str = tmp.ask_information("What is your phone number? ");
	tmp.ask_phone_number(str);
	str = tmp.ask_information("What is your darkest secret? ");
	tmp.ask_darkest_secret(str);
	contacts[current_index] = tmp;
	current_index++;
	if (current_index == 8)
		current_index = 0;
}