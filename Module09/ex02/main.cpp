/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:33 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/19 21:51:42 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cout << "Error: Wrong number of arguments\nUsage: ./PmergeMe \"Numbers\"" << std::endl;
        return (1);
    }

    PmergeMe Values(argc, argv);

    //Values.PrintVectorChar();
    try{
        
        Values.Run();
        //Values.PrintVectorInt();
   
    } catch (std::exception &e) {

        std::cout << "Error: " << e.what() << std::endl << std::endl;
    }

    return 0;
}