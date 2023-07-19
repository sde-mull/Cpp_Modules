/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:53:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/18 16:40:20 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
	std::cout << std::endl;
    harl.complain("INFO");
	std::cout << std::endl;
    harl.complain("WARNING");
	std::cout << std::endl;
    harl.complain("ERROR");
	std::cout << std::endl;
    harl.complain("RANDOM");
	std::cout << std::endl;

	return (0);
}