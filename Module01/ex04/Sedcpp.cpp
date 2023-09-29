/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedcpp.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:11:43 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/29 18:43:52 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedcpp.hpp"

Sedcpp::Sedcpp(void)
{
	std::cout << GREEN "Sedcpp default constructor called" RESET << std::endl;
}

Sedcpp::~Sedcpp(void)
{
	std::cout << RED "Sedcpp destructor called" RESET << std::endl;
}

Sedcpp::Sedcpp(const std::string &filename)
{
	std::string copy;

	copy = filename;
	std::cout << GREEN "Sedcpp parametric constructor called" RESET << std::endl;
	this->_infile = filename;
	this->_outfile = filename + ".replace";
}

bool Sedcpp::replace(const std::string &s1, const std::string &s2)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string to_compare;
	size_t	position;
	
	ifs.open(this->_infile.c_str());
	ofs.open(this->_outfile.c_str());

	if (ifs.fail()){
		std::cout << RED "Error:\nFailed to open the file" RESET << std::endl;
		return (false);
	}
	if (ifs.is_open()){
		if (std::getline(ifs, to_compare, '\0')){
			position = to_compare.find(s1);
			while (position != std::string::npos)
			{
				to_compare.erase(position, s1.length());
				to_compare.insert(position, s2);
				position = to_compare.find(s1, position + s2.length());
			}
			ofs << to_compare;
		}
		else{
			std::cout << RED "Error:\nFile is empty" RESET << std::endl;
			ofs.close();
			return (false);
		}
	}
	else{
		std::cout << B_RED "File opening failed." RESET << std::endl; 
	}
	ofs.close();
	return (true);
}