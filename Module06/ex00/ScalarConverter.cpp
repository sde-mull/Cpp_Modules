/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:21:06 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/26 21:02:48 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
    *this = src;
}

ScalarConverter & ScalarConverter::operator = (const ScalarConverter &src)
{
    (void)src;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert(std::string const str)
{
	HandleType(str);
}

void HandleType(std::string const str){

	unsigned int StrLen = str.length();
	unsigned int i = 0;

	while (str[i] == '+' || str[i] == '-')
		i++;

	if (std::isprint(str[i]) && !std::isdigit(str[i]))
		HandlePrintableConversion(str);
	else if (str[StrLen - 1] == 'f')
		HandleFloatConversion(str, StrLen);
	else if (str.find('.') != std::string::npos)
		HandleDoubleConversion(str, StrLen);
	else if (std::isdigit(str[i]))
		HandleIntConversion(str, StrLen);
	else
		HandleError();
}

void	HandleIntConversion(std::string const str, unsigned int StrLen){

	unsigned int i = 0;

	while (std::isdigit(str[i]) || (str[i] == '+' || str[i] == '-'))
			i++;
	if (i == StrLen)
		IntConversion(str);
	else
		HandleError();
}

void	HandleDoubleConversion(std::string const str, unsigned int StrLen){

	unsigned int i = 0;

	while (std::isdigit(str[i]) || str[i] == '.' || (str[i] == '+' || str[i] == '-'))
			i++;
	if (i == StrLen)
		DoubleConversion(str);
	else
		HandleError();
}

void	HandleFloatConversion(std::string const str, unsigned int StrLen){

	unsigned int i = 0;

	while (i < StrLen - 1 && (std::isdigit(str[i]) || (str[i] == '.') || (str[i] == '+' || str[i] == '-')))
			i++;
	if (i == StrLen - 1)
		FloatConversion(str);
	else
		HandleError();
}

void HandlePrintableConversion(std::string const str){
	
	if (str.length() == 1)
		CharConversion(str);
	else if (str ==  "-inf" || str == "-inff")
		MinInfConversion();
	else if (str == "+inf" || str == "+inff")
		MaxInfConversion();
	else if (str == "nan" || str == "nanf")
		NanConversion();
	else
		HandleError();
}

void		CharConversion(std::string str) {

	std::cout << "Entered Char conversion" << std::endl;
	
	std::cout << "char: " << str << std::endl;
	std::cout << "int: "  << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << std::endl;
}

void		MinInfConversion() {

	std::cout << "Entered MinInf conversion" << std::endl;

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;
	std::cout << "float: " << __FLT_MIN__ << std::endl;
	std::cout << "double: " << __DBL_MIN__ << std::endl;
}

void		MaxInfConversion() {

	std::cout << "Entered MaxInf conversion" << std::endl;
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;
	std::cout << "float: " << __FLT_MAX__ << std::endl;
	std::cout << "double: " << __DBL_MAX__ << std::endl;
}

void		NanConversion() {

	std::cout << "Entered Nan conversion" << std::endl;
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}

void		HandleError() {

	std::cout << "Entered Handle Error" << std::endl;
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << 0 << std::endl;
	std::cout << "float: " << 0 << std::endl;
	std::cout << "double: " << 0 << std::endl;
}

void		FloatConversion(std::string str) {

	std::cout << "Entered Float conversion" << std::endl;

	float	n = atof(str.c_str());

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << n << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

void		DoubleConversion(std::string str) {

	std::cout << "Entered Double conversion" << std::endl;

	double	n = atof(str.c_str());

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << n << std::endl;
}

void		IntConversion(std::string str) {

	std::cout << "Entered Int conversion" << std::endl;

	int	n = atoi(str.c_str());

	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}