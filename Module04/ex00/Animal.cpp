/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:46:16 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/08 00:55:05 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal parametric constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Nothing happens" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}