/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:47:14 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/03 22:48:14 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	std::string choices;

	system("clear");
	while (1)
	{
		book.Menu();
		std::getline(std::cin, choices);
		if (!choices.compare("ADD"))
			book.Add();
		else if (!choices.compare("SEARCH"))
			std::cout << "Another good choice\n" << std::endl;
		else if (!choices.compare("EXIT"))
			break;
		else
			std::cout << B_RED "Wrong option try again!" RESET << std::endl;
		std::cout << std::flush;
	}
	return (0);
}