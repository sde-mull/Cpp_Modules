/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:54:49 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/21 22:17:19 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int					rawBits;
		static const int	factionalBit = 8;
    
    public:
        Fixed(void);
        Fixed( Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        ~Fixed(void);
        

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif