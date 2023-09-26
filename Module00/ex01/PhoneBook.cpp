/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:02 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 00:28:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->current_index = 0;
	this->max_index = 0;
	std::cout << GREEN "Phonebook constructor called " RESET << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << YELLOW "Phonebook destructor called " RESET << std::endl;
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
	
	str = tmp.ask_information("First Name: ");
	tmp.ask_first_name(str);
	str = tmp.ask_information("Last Name: ");
	tmp.ask_last_name(str);
	str = tmp.ask_information("Nickname: ");
	tmp.ask_nickname(str);
	str = tmp.ask_information("Phone Number: ");
	tmp.ask_phone_number(str);
	str = tmp.ask_information("Darkest Secret: ");
	tmp.ask_darkest_secret(str);
	contacts[this->current_index] = tmp;
	this->current_index++;
	check_max_index();
	if (this->current_index == 8)
		this->current_index = 0;
}

void	truncate_words(const std::string& str)
{
	int spaces;
	int c;
	int count;

	spaces = 0;
	count = 0;
	std::cout << BLUE "|" RESET;
	spaces = 10 - str.length();
	if (spaces < 0)
		spaces = 0;
	c = 10 - spaces;
	while (spaces != 0)
	{
		std::cout << " ";
		spaces--;
	}
	while (count < c - 1)
		std::cout << B_CYAN << str[count++] << RESET;
	if (str.length() > 10)
		std::cout << B_CYAN "." RESET;
	else
		std::cout << B_CYAN << str[count] << RESET;
}

void	PhoneBook::Search(void)
{
	unsigned int 	prints;
	unsigned int	index;
	std::string		choices;

	prints = 0;

	std::cout << BLUE "/*********************************************\\" RESET "      " B_CYAN "Type \"BACK\" to return to main" RESET<< std::endl;
	std::cout << BLUE "/*                                           *\\" RESET "      " B_CYAN "Must type an index to see the contacts information" RESET << std::endl;
	std::cout << BLUE "/*                                           *\\" RESET << std::endl;
	std::cout << BLUE "/*            " B_MAGENTA "Contacts Information" BLUE"           *\\" RESET << std::endl;
	std::cout << BLUE "/*                                           *\\" RESET << std::endl;
	std::cout << BLUE "/*                                           *\\" RESET << std::endl;
	std::cout << BLUE "/*********************************************\\" RESET << std::endl;
	std::cout << BLUE "/*          *          *          *          *\\" RESET << std::endl;
	std::cout << BLUE "/*          *   " B_MAGENTA "FIRST  " BLUE "*   " B_MAGENTA "LAST   " BLUE "*          *\\" RESET << std::endl;
	std::cout << BLUE "/*  " B_MAGENTA "INDEX   " BLUE "*          *          * " B_MAGENTA "NICKNAME " BLUE "*\\" RESET << std::endl;
	std::cout << BLUE "/*          *   " B_MAGENTA "NAME   " BLUE "*   " B_MAGENTA "NAME   " BLUE "*          *\\" RESET << std::endl;
	std::cout << BLUE "/*          *          *          *          *\\" RESET << std::endl;
	std::cout << BLUE "/*********************************************\\" RESET << std::endl;

	while (prints < this->max_index)
	{
		std::cout << BLUE "/*         " B_CYAN << prints + 1 << RESET;
		truncate_words(this->contacts[prints].get_first_name());
		truncate_words(this->contacts[prints].get_last_name());
		truncate_words(this->contacts[prints].get_nickname());
		std::cout << BLUE "*\\" RESET << std::endl;
		std::cout << BLUE "/*********************************************\\" RESET << std::endl;
		prints++;
	}

	std::cout << std::endl;
	while (1)
	{
		std::cout << B_CYAN "Type here: " RESET;
		std::getline(std::cin, choices);
		if (!choices.compare("EXIT"))
			exit(0);
		if (!choices.compare("BACK"))
			break;
		if (choices.find_first_not_of("0123456789") == std::string::npos)
		{
			index = std::atoi(choices.c_str());
			if (index > this->max_index || index <= 0)
			{
				std::cout << YELLOW "The index must exist" RESET << std::endl;
				continue ;
			}
			std::cout << B_MAGENTA "[Index]: " B_CYAN << index << RESET <<std::endl;
			this->contacts[index - 1].print_info();
		}l
		else
			std::cout << YELLOW "It must be an index" RESET << std::endl;
		std::cout << std::flush;
	}
}

void PhoneBook::check_max_index(void)
{
	if (this->current_index > this->max_index)
		this->max_index = this->current_index;
}