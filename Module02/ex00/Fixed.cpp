/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:54:45 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/05 17:33:22 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Fixed class copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Fixed class default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Fixed class destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Fixed class copy assignment operator called" << std::endl;
    this->rawBits = rhs.getRawBits();

    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "Fixed class getRawBits member function called" << std::endl;

    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "Fixed class setRawBits member function called" << std::endl;
    
    this->rawBits = raw;

    return ;
}