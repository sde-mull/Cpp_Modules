/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:33 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/22 19:51:13 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{

  if (argc != 2)
  {
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
  }

  try {
  	BitcoinExchange bit = BitcoinExchange(argv[1]);

  	std::cout << "show:" << std::endl;
  	bit.show();
  }
  catch(const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  
  return 0;
}