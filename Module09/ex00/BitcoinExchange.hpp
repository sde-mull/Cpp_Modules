/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/22 19:50:55 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <map>
#include <fstream>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<int, std::map<std::string, std::string> > bitcoin;
        BitcoinExchange();
        void    divideInput(std::string input);

    public:
        BitcoinExchange(char *file);
        BitcoinExchange( BitcoinExchange const & src);
        ~BitcoinExchange();

        BitcoinExchange & operator=(BitcoinExchange const & rhs);

        void    show(void);
};

std::ostream &  operator<<( std::ostream & o, BitcoinExchange const & i );

#endif