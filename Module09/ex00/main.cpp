/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:33 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/11 00:30:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
  BitcoinExchange Bitcoin;

  try {
    if (argc != 2){
      throw WrongNumberOfArguments();
    }
    Bitcoin.SaveDatabase();
    Bitcoin.PrintScreen(argv[1]);

    BitcoinExchange test(Bitcoin);
    test.PrintScreen(argv[1]);
  }
  catch(const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}