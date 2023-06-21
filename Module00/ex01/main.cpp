/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:47:14 by sde-mull          #+#    #+#             */
/*   Updated: 2023/06/21 22:41:58 by sde-mull         ###   ########.fr       */
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
		std::cin >> choices;
		if (!choices.compare("ADD"))
			std::cout << "Good choice\n" << std::endl;
		else if (!choices.compare("SEARCH"))
			std::cout << "Another good choice\n" << std::endl;
		else if (!choices.compare("EXIT"))
			break;
		else
			std::cout << B_RED "Wrong option try again!" RESET << std::endl;
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (0);
}