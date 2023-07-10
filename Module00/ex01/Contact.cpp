/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:25 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/10 20:30:08 by sde-mull         ###   ########.fr       */
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
	size_t start;
	size_t end;

    std::cout << B_CYAN << question << RESET;
    while (true)
    {
        std::getline(std::cin, str);
        // if (!str.compare("EXIT"))
        //     exit(0);
        if (!str.empty())
        {
            start = str.find_first_not_of(' ');
            end = str.find_last_not_of(' ');

            if (start != std::string::npos && end != std::string::npos)
                str = str.substr(start, end - start + 1);
            else
                str = "";

            if (!str.empty())
                break;
        }
        std::cout << YELLOW "This field cannot be empty. Please enter a value." RESET << std::endl;
        std::cout << B_CYAN << question << RESET;
        std::cout << std::flush;
    }
    return str;
}



void Contact::print_info(void)
{
	std::cout << B_MAGENTA "[First Name]: " B_CYAN << _first_name << RESET << std::endl;
	std::cout << B_MAGENTA "[Last Name]: " B_CYAN << _last_name << RESET << std::endl;
	std::cout << B_MAGENTA "[Nickname]: " B_CYAN << _nickname << RESET << std::endl;
	std::cout << B_MAGENTA "[Phone Number]: " B_CYAN << _phone_number << RESET << std::endl;
	std::cout << B_MAGENTA "[Darkest Secret]: " B_CYAN << _darkest_secret << RESET <<std::endl;
}

std::string Contact::get_first_name(void)
{
	return (_first_name);
}

std::string Contact::get_last_name(void)
{
	return (_last_name);
}

std::string Contact::get_nickname(void)
{
	return (_nickname);
}

std::string Contact::get_phonenumber(void)
{
	return (_phone_number);
}

std::string Contact::get_darkest_scret(void)
{
	return (_darkest_secret);
}
