/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:25 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/03 22:36:14 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << GREEN"Contacts constructor called"RESET << std::endl;
}

Contact::~Contact(void)
{
	std::cout << YELLOW"Contacts destructor called"RESET << std::endl;
}

void Contact::ask_first_name(std::string first_name)
{
	_first_name = first_name;
}

void Contact::ask_last_name(std::string last_name)
{
	_last_name = last_name;
}

void Contact::ask_nickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::ask_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

void Contact::ask_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

std::string Contact::ask_information(const std::string& question)
{
    std::string str;

    std::cout << B_CYAN << question << RESET;
    while (true)
    {
        std::getline(std::cin, str);
        if (!str.empty())
            break;
        std::cout << YELLOW "This field cannot be empty. Please enter a value." RESET << std::endl;
        std::cout << B_CYAN << question << RESET;
        std::cout << std::flush;
    }
    return str;
}

void Contact::print_info(void)
{
	std::cout << B_MAGENTA "This is the first_name of this contact list: " RESET << _first_name << std::endl;
	std::cout << B_MAGENTA "This is the last name of this contact list: " RESET << _last_name << std::endl;
	std::cout << B_MAGENTA "This is the nickname of this contact list: " RESET << _nickname << std::endl;
	std::cout << B_MAGENTA "This is the phone number of this contact list: " RESET << _phone_number << std::endl;
	std::cout << B_MAGENTA "This is the darkest secret of this contact list: " RESET << _darkest_secret << std::endl;
}