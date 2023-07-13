/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:32:44 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 09:44:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << BLUE "Memory address of str: " RESET << &str << std::endl;
	std::cout << BLUE "Memory address of stringPTR: " RESET << &stringPTR << std::endl;
	std::cout << BLUE "Memory address of stringREF: " RESET << &stringREF << std::endl;
	
	std::cout << CYAN "value of str: " RESET << str << std::endl;
	std::cout << CYAN "value of stringPTR: " RESET << stringPTR << std::endl;
	std::cout << CYAN "value of stringREF: " RESET<< stringREF << std::endl;
	
	return (0);
}