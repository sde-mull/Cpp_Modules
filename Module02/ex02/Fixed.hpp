/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:28:06 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/05 17:05:46 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					rawBits;
		static const int	fractionalBit = 8;
    
    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed( Fixed const & src);
        ~Fixed(void);
        
        Fixed & operator=(Fixed const & rhs);
        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator*(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;

        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator==(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;

        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);

        static Fixed & min(Fixed & a, Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);
        static const Fixed & min(Fixed const & a, Fixed const & b);
        static const Fixed & max(Fixed const & a, Fixed const & b);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif