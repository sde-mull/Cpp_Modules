/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:31:32 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/06 20:17:38 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main( void ) 
{
    int intArray[3] = { 2, 4 , 6 };

    std::string strArray[4] = { "Hello", "42", "and", "World"};

    ::iter(intArray, 3, ::printElem);

    ::iter(strArray, 4, ::printElem);
    
    return 0;
}