/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/11 18:58:04 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 

#define DB "data.csv"

class BitcoinExchange{
	private:
		std::ifstream _InputFile;
		std::ifstream _Database;
	public:
		BitcoinExchange();
		BitcoinExchange(const char *file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);

		//Functions

		bool		OpenFile(const char * file);
		void		Start( void );

};
