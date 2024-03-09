/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:31:32 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/08 15:14:01 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	int intArray[] = {1, 2, 3, 4, 5};

    std::string strArray[] = {"Hello World"};

    void* voidArray[] = {&intArray, &strArray};
    {
        ::iter(static_cast<int*>(voidArray[0]), 5, &printElem);
		std::cout << std::endl;
    }
    {
        ::iter(static_cast<char*>(voidArray[1]), 11, &printElem);
		std::cout << std::endl;
    }
    return (0);
}