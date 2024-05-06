/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/06 16:28:39 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    testGrade(Bureaucrat &bure, std::string test)
{
    try {
        
        if (test == "Increment")
        {
            std::cout << bure.getName() << " Increment Grade for: " << bure.getGrade() - 1 << std::endl;
            bure.incrementGrade();
        }
        else if (test == "Decrement")
        {
            std::cout << bure.getName() << " Decrement Grade for: " << bure.getGrade() + 1 << std::endl;
            bure.decrementGrade();
        }

        std::cout << bure << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
}

void    finalResult(Bureaucrat &bure1, Bureaucrat &bure2)
{
    std::cout << "Results: " << std::endl;
    std::cout << bure1 << std::endl;
    std::cout << bure2 << std::endl << std::endl;
}

int main()
{
    Bureaucrat  Persona1("Persona1", 1);
    Bureaucrat  Persona2("Persona2", 150);

    std::cout << std::endl;
    
    testGrade(Persona1, "Increment");
    testGrade(Persona1, "Decrement");
    testGrade(Persona2, "Decrement");
    testGrade(Persona2, "Increment");
    
    finalResult(Persona1, Persona2);
    std::cout << std::endl;

    //--------- Testing copy constructor -------

    Bureaucrat Persona1_copy(Persona1);
    Bureaucrat Persona2_copy;

    Persona2_copy = Persona2;

    std::cout << std::endl;
    
    std::cout << "For Persona1_copy: " << std::endl;
    std::cout << "Name: " << Persona1_copy.getName() << std::endl;
    std::cout << "Grade: " << Persona1_copy.getGrade() << std::endl;

    std::cout << std::endl;

    std::cout << "For Persona2_copy: " << std::endl;
    std::cout << "Name: " << Persona2_copy.getName() << std::endl;
    std::cout << "Grade: " << Persona2_copy.getGrade() << std::endl;

    std::cout << std::endl;
    
    return 0;
}