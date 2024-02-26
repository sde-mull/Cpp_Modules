/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:21:11 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/26 18:46:51 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <climits>
#include <cstdlib>


void HandleType(std::string str);
void HandlePrintableConversion(std::string const str);
void CharConversion(std::string str);
void MinInfConversion();
void MaxInfConversion();
void NanConversion();
void HandleError();
void	HandleIntConversion(std::string const str, unsigned int StrLen);
void	HandleDoubleConversion(std::string const str, unsigned int StrLen);
void	HandleFloatConversion(std::string const str, unsigned int StrLen);
void		FloatConversion(std::string str);
void		DoubleConversion(std::string str);
void		IntConversion(std::string str);


class ScalarConverter
{
	private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ~ScalarConverter();
    public:
        ScalarConverter & operator = (const ScalarConverter &src);

        static void convert(std::string const str);
};

#endif