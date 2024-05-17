/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:21:01 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/17 22:13:43 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main(void)
{
	{
		srand(time(NULL));
		std::vector<int> container;
		for (int i = -1; i < 20; i++)
			container.push_back(i);
		for (int j = 0; j < 3; j++)
		{
			try{
				const int Number = rand() % 25;
				::EasyFind(container, Number);
			}
			catch (std::exception &exc){
				std::cout << exc.what() << std::endl;
				}
		}
		
	}
	return (0);
}