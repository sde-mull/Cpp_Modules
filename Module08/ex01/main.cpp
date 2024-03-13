/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:31:32 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/13 23:31:37 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    {
        Span experiment(20);

        experiment.addNumber(6);
        experiment.addNumber(3);
        experiment.addNumber(17);
        experiment.addNumber(9);
        experiment.addNumber(11);

        std::cout << B_MAGENTA << "--------------- Testing Constructor, Copy constructor, Assignment operator and Destructor ---------------------" << RESET << std::endl;

        std::cout << "Number max length saved on experiment: " << experiment.GetN() << std::endl;
        std::cout << "Numbers in Experiment List: ";
        experiment.PrintList();
          std::cout << std::endl;

        std::cout << "Testing copy constructor..." << std::endl;

        Span Testing(experiment);

        std::cout << "Number max length saved on testing: " << Testing.GetN() << std::endl;
        std::cout << "Numbers in Testing List: ";
        Testing.PrintList();
        std::cout << std::endl;

        std::cout << "Testing assignment operator..." << std::endl;

        Span Testing2(experiment);

        Testing2 = experiment;

        std::cout << "Number max length saved on testing2: " << Testing2.GetN() << std::endl;
        std::cout << "Numbers in Testing List: ";
        Testing.PrintList();
        std::cout << B_GREEN << "OK" << RESET << std::endl;
        std::cout << std::endl;
    }
    std::cout << B_MAGENTA << "--------------- Test From The Subject ---------------------" << RESET << std::endl;
    {
        try
        {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            std::cout << B_GREEN << "OK" << RESET << std::endl;
        } catch (std::exception &except){

            std::cerr << except.what() << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << B_MAGENTA << "--------------- Test of empty List or size one and max List ---------------------" << RESET << std::endl;
    {
        Span test3(2);
        try{

            std::cout << "Shortest span for 0 elements" << std::endl;
            test3.shortestSpan();
        } catch (std::exception &except){
            std::cerr << except.what() << std::endl;
            std::cout << B_GREEN << "OK" << RESET << std::endl;
        }
        std::cout << std::endl;
        test3.addNumber(6);
        try{
            std::cout << "Longest span for 1 elements" << std::endl;
            test3.longestSpan();
        } catch (std::exception &except){
            std::cerr << except.what() << std::endl;
            std::cout << B_GREEN << "OK" << RESET << std::endl;
        }
        std::cout << std::endl;
        test3.addNumber(3);
        try{
            std::cout << "Shortest span for 2 elements" << std::endl;
            test3.shortestSpan();
            std::cout << "Longest span for 2 elements" << std::endl;
            test3.longestSpan();
            std::cout << B_GREEN << "OK" << RESET << std::endl;
        } catch (std::exception &except){
            std::cerr << except.what() << std::endl;
        }
        try{
            test3.addNumber(4);
        } catch (std::exception &except){
            std::cerr << except.what() << std::endl;
            std::cout << B_GREEN << "OK" << RESET << std::endl;
        }
    }
    std::cout << B_MAGENTA << "--------------- Test of the 10000 numbers or more ---------------------" << RESET << std::endl;
    {
        try
        {
            Span UltimateTest(10);
            UltimateTest.addListNumber(RANGE, -15, 15);
            UltimateTest.PrintList();
            std::cout << UltimateTest.shortestSpan() << std::endl;
            std::cout << UltimateTest.longestSpan() << std::endl;
        }
        catch (std::exception &except)
        {

            std::cerr << except.what() << std::endl;
        }
    }

    return (0);
}