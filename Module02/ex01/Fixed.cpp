/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:26:16 by sde-mull          #+#    #+#             */
/*   Updated: 2023/08/11 18:47:39 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::Fixed(float const value) : rawBits(roundf(value * (1 << factionalBit)))
{
    std::cout << "Float constructor called" << std::endl;

    return ;
}

Fixed::Fixed(int const value) : rawBits(value << factionalBit)
{
    std::cout << "Int constructor called" << std::endl;

    return ;
}

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

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
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    
    this->rawBits = raw;

    return ;
}

float Fixed::toFloat(void) const
{   
    return ((float) this->rawBits) / (1 << this->factionalBit);
}

int Fixed::toInt(void) const
{
    return this->rawBits >> this->factionalBit;;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();

    return o;
}
