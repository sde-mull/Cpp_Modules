/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:32:01 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/12 20:33:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &src)
{
    *this = src;
}

Serializer & Serializer::operator = (const Serializer &src)
{
    (void)src;
    return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
    return (intptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *data_ptr = reinterpret_cast<Data*>(raw);
    return (data_ptr);
}