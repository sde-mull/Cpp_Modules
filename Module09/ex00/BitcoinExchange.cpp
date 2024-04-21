/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:31 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/11 18:57:57 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange constructor called\n" << std::endl;
}

BitcoinExchange::BitcoinExchange(const char *file)
{
    std::cout << "BitcoinExchange parameter constructor called\n" << std::endl;
	if (!OpenFile(file))
		return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
    std::cout << "BitcoinExchange copy constructor called\n" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator = (const BitcoinExchange &src)
{
    (void)src;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor called\n" << std::endl;
	this->_InputFile.close();
	this->_Database.close();
}

bool BitcoinExchange::OpenFile(const char *file){

	this->_InputFile.open(file);
	if (!this->_InputFile.is_open()) {
		std::cout << "Error: Failed to open the input file\n" << std::endl; 
        return false;
    }

	this->_Database.open(DB);
	if (!this->_Database.is_open()) {
		std::cout << "Error: Failed to open the database file\n" << std::endl; 
        return false;
    }
	return true;
}

void	BitcoinExchange::Start( void ){
	
}