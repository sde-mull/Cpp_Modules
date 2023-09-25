/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/25 02:46:58 by sde-mull         ###   ########.fr       */
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
    Intern someRandomIntern;
    AForm* rrf;

    try {
            std::cout << std::endl << "--- Test ---" << std::endl << std::endl;
    
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            std::cout << "1. " << rrf->getName() << std::endl;
            delete rrf;
            std::cout  << std::endl;
            
            rrf = someRandomIntern.makeForm("shrubbery creation", "Fruit");
            std::cout << "2. " << rrf->getName() << std::endl;
            delete rrf;
            std::cout  << std::endl;
        
            rrf = someRandomIntern.makeForm("presidential pardon", "House");
            std::cout << "3. " << rrf->getName() << std::endl;
            delete rrf;
            std::cout  << std::endl;
        
            rrf = someRandomIntern.makeForm("food request", "Ameijoa");
        
    }  catch(const std::exception& e) {
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
    }
    
    return 0;
}
