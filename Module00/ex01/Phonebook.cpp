/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:02 by sde-mull          #+#    #+#             */
/*   Updated: 2023/06/21 22:12:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
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