/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/12 19:14:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testExecute(Bureaucrat *bure, AForm *form)
{
    try {
            std::cout << *bure << std::endl;
            std::cout << *form << std::endl << std::endl;

            form->beSigned(*bure);
            bure->executeForm(*form);

            std::cout << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
}

void    testCopy(AForm *form1, AForm *form2)
{
    std::cout << *form1 << " \n" << *form2 << std::endl;
    
    form1 = form2;

    std::cout << std::endl << "Result: " << *form1 << std::endl << std::endl;
}

int main()
{
    try{

    Bureaucrat  Persona1("Persona1", 1);
    Bureaucrat  Persona2("Persona2", 150);
    Bureaucrat  Persona3("Persona3", 50);
    AForm       *shrubbery = new ShrubberyCreationForm("home");
    AForm       *robot = new RobotomyRequestForm("robot");
    AForm       *presidential = new PresidentialPardonForm("president");

    std::cout << std::endl << "---Test Assined---" << std::endl << std::endl;

    testExecute(&Persona3, robot);
    testExecute(&Persona1, shrubbery);
    testExecute(&Persona1, robot);
    testExecute(&Persona1, presidential);
    testExecute(&Persona2, shrubbery);
    testExecute(&Persona2, robot);
    testExecute(&Persona2, presidential);
    
    std::cout << std::endl << "---Test Copy---" << std::endl << std::endl;
    
    testCopy(shrubbery, robot);

    delete shrubbery;
    delete robot;
    delete presidential;
    }  catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
    
    return 0;
}
