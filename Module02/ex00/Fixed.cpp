/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:54:45 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/21 21:55:26 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs)
        this->rawBits = rhs.getRawBits();

    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    
    this->rawBits = raw;

    return ;
}