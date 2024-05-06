/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/06 19:14:07 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat  Persona1("Persona1", 1);
    Intern      someRandomIntern;
    AForm*      RSP;

    try {
            std::cout << std::endl << "--- Test ---" << std::endl << std::endl;
    
            RSP = someRandomIntern.makeForm("robotomy request", "Bender");
            
            std::cout << std::endl;
            std::cout << "1. " << RSP->getName() << std::endl;
            std::cout << std::endl;
            RSP->beSigned(Persona1);
            Persona1.executeForm(*RSP);
            std::cout << std::endl;
            
            delete RSP;
            std::cout  << std::endl;
            
            RSP = someRandomIntern.makeForm("shrubbery creation", "Fruit");

            std::cout << std::endl;
            std::cout << "2. " << RSP->getName() << std::endl;

            std::cout << std::endl;
            RSP->beSigned(Persona1);
            Persona1.executeForm(*RSP);
            std::cout << std::endl;

            delete RSP;
            std::cout  << std::endl;
        
            RSP = someRandomIntern.makeForm("presidential pardon", "House");

            std::cout << std::endl;
            std::cout << "3. " << RSP->getName() << std::endl;

            std::cout << std::endl;
            RSP->beSigned(Persona1);
            Persona1.executeForm(*RSP);
            std::cout << std::endl;

            delete RSP;
            std::cout  << std::endl;
        
            RSP = someRandomIntern.makeForm("food request", "Ameijoa");
        
    }  catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
    
    return 0;
}
