/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:32:12 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/12 20:33:13 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp" 

class Serializer
{
    public:
        Serializer();
        Serializer(const Serializer &src);
        Serializer & operator = (const Serializer &src);
        ~Serializer();

        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};



#endif