/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:27:27 by sde-mull          #+#    #+#             */
/*   Updated: 2023/08/11 18:27:32 by sde-mull         ###   ########.fr       */
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
		static const int	factionalBit = 8;
    
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