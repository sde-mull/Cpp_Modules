/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/25 02:40:03 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testGrade(Bureaucrat *bure, AForm *form)
{
    try {
            std::cout << *bure << std::endl;
            std::cout << *form << std::endl << std::endl;

            form->beSigned(*bure);
            bure->executeForm(*form);

            std::cout << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
    }
}

void    testCopy(AForm *form1, AForm *form2)
{
    std::cout << *form1 << " for " << *form2 << std::endl;
    
    form1 = form2;

    std::cout << std::endl << "Result: " << *form1 << std::endl << std::endl;
}

int main()
{
    Bureaucrat  camila("Camila", 1);
    Bureaucrat  albert("Albert", 150);
    AForm       *shrubbery = new ShrubberyCreationForm("home");
    AForm       *robot = new RobotomyRequestForm("robot");
    AForm       *presidential = new PresidentialPardonForm("president");

    std::cout << std::endl << "---Test Assined---" << std::endl << std::endl;

    testGrade(&camila, shrubbery);
    testGrade(&camila, robot);
    testGrade(&camila, presidential);
    testGrade(&albert, shrubbery);
    testGrade(&albert, robot);
    testGrade(&albert, presidential);
    
    std::cout << std::endl << "---Test Copy---" << std::endl << std::endl;
    
    testCopy(shrubbery, robot);

    delete shrubbery;
    delete robot;
    delete presidential;
    
    return 0;
}
