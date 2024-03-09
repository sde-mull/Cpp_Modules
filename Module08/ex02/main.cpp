/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:38:49 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/08 18:18:44 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    // First case: empty array
    {
        Array<int> example1;
        std::cout << "Size of the example1: " << example1.Size() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    {
        int *a = new int();
        std::cout << *a << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    // Second case: Number of elements passed and testing all constructors forms
    {
        Array<int> Debugging;
        srand(time(NULL));
        Array<int> example2(10);
        for (int i = 0; i < 10; i++)
        {
            const int Number = rand() % 101;
            std::cout << "Number generated: " << Number << std::endl;
            example2[i] = Number;
        }
        std::cout << "------------------------  Original Array contents  --------------------------------" << std::endl;
        example2.printArray();

        std::cout << "------------------------  Assignment Operator Array contents  --------------------------------" << std::endl;
        Debugging = example2;
        Debugging.printArray();

        std::cout << "------------------------  Copy Constructor Array contents  --------------------------------" << std::endl;
        Array<int> Debugging2(example2);
        Debugging2.printArray();
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    // Third Case: Check if the exceptions are working well
    {
        try
        {
            std::cout << "------------------------  Exception: No error case  --------------------------------" << std::endl;
            Array<int> example3(1);
            example3[0] = 3;
            std::cout << "example3[0] = 3" << std::endl;
            std::cout << "------------------------  Exception: error case  --------------------------------" << std::endl;
            std::cout << "example3[1] = 4" << std::endl;
            example3[1] = 4;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}