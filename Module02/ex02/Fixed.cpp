/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:27:59 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/05 17:46:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
    std::cout << "Fixed class default constructor called" << std::endl;

    return ;
}

Fixed::Fixed(float const value) : rawBits(roundf(value * (1 << fractionalBit)))
{
    std::cout << "Fixed class float constructor called" << std::endl;

    return ;
}

Fixed::Fixed(int const value) : rawBits(value << fractionalBit)
{
    std::cout << "Fixed class int constructor called" << std::endl;

    return ;
}

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Fixed class copy constructor called" << std::endl;
    *this = src;

    return ;
}

Fixed::~Fixed()
{
    std::cout << "Fixed class destructor called" << std::endl;

    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
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

float Fixed::toFloat(void) const
{
    return ((float) this->rawBits) / (1 << this->fractionalBit);
}

int Fixed::toInt(void) const
{
    return this->rawBits >> this->fractionalBit;;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();

    return o;
}

Fixed   Fixed::operator+(Fixed const & rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-(Fixed const & rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const & rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed const & rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

bool   Fixed::operator>(Fixed const & rhs) const
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool   Fixed::operator<(Fixed const & rhs) const
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool   Fixed::operator>=(Fixed const & rhs) const
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool   Fixed::operator<=(Fixed const & rhs) const
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool   Fixed::operator==(Fixed const & rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool   Fixed::operator!=(Fixed const & rhs) const
{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed & Fixed::operator++(void)
{
    this->setRawBits(this->rawBits + 1);
    return *this;
}

Fixed & Fixed::operator--(void)
{
    this->setRawBits(this->rawBits - 1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->setRawBits(this->rawBits + 1);
    
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->setRawBits(this->rawBits - 1);

    return tmp;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
    if (a.getRawBits() < a.getRawBits())
        return a;
    return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
    if (a.getRawBits() < b.getRawBits())
        return  a;
    return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
    if (a.getRawBits() > b.getRawBits())
        return  a;
    return  b;
}
