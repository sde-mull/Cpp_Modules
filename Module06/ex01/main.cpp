/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:31:32 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/12 20:32:36 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    int i;
    Data data_obj;
    uintptr_t int_ptr;
    Data *data_ptr;

    i = 42;
    data_obj.member = &i;

    int_ptr = Serializer::serialize(&data_obj);
    data_ptr = Serializer::deserialize(int_ptr);

    std::cout << "Original Pointer: " << &data_obj << std::endl;
    std::cout << "Final Pointer: " << data_ptr << std::endl;
    
    return (0);
}