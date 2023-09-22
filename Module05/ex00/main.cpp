/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 11:54:30 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    testInit(int grade)
{
    try {
        
        Bureaucrat  bur("Bur", grade);
        
    }  catch(const std::exception& e) {
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
    }
}

void    testGrade(Bureaucrat *bure, std::string test)
{
    try {
        
        if (test == "Increment")
        {
            std::cout << bure->getName() << " increment Grade for: " << bure->getGrade() - 1 << std::endl;
            bure->incrementGrade();
        }
        else if (test == "Decrement")
        {
            std::cout << bure->getName() << "Decrement Grade for: " << bure->getGrade() + 1 << std::endl;
            bure->decrementGrade();
        }

        std::cout << *bure << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
    }
}

void    testCopy(Bureaucrat *bure1, Bureaucrat *bure2)
{
    std::cout << *bure1 << " for " << *bure2 << std::endl;
    
    bure1 = bure2;

    std::cout << std::endl << "Result: " << *bure1 << std::endl << std::endl;
}

int main()
{
    Bureaucrat  camila("Camila", 1);
    Bureaucrat  albert("Albert", 150);

    std::cout << std::endl << "---Test Init---" << std::endl << std::endl;

    testInit(0);
    testInit(151);
    testInit(1);

    std::cout << std::endl << "---Test Increment/Decrement---" << std::endl << std::endl;

    testGrade(&camila, "Increment");
    testGrade(&camila, "Decrement");
    testGrade(&albert, "Decrement");
    testGrade(&albert, "Increment");
    
    std::cout << std::endl << "---Test Copy---" << std::endl << std::endl;
    
    testCopy(&albert, &camila);
    
    return 0;
}