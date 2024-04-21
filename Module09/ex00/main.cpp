/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:33 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/11 18:58:17 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){
	
	if (argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}

    BitcoinExchange Btc(argv[1]);
	Btc.Start();
	
	return (0);
}