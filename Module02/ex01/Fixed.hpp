/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:27:27 by sde-mull          #+#    #+#             */
/*   Updated: 2023/10/05 17:43:06 by sde-mull         ###   ########.fr       */
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

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif