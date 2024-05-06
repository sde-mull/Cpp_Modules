/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/06 18:06:10 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    testForm(Bureaucrat &bure, Form &form)
{
    try {
            std::cout << bure << std::endl;
            std::cout << form << std::endl << std::endl;
        
            form.beSigned(bure);

            std::cout << std::endl << std::endl;
        
    } catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
}

void    testGrade(Bureaucrat &bure, std::string test)
{
    try {
        
        if (test == "Increment")
        {
            std::cout << bure.getName() << " increment Grade for: " << bure.getGrade() - 1 << std::endl;
            bure.incrementGrade();
        }
        else if (test == "Decrement")
        {
            std::cout << bure.getName() << " decrement Grade for: " << bure.getGrade() + 1 << std::endl;
            bure.decrementGrade();
        }

        std::cout << bure << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    
    }
}

void    finalResult(Bureaucrat &bure1, Bureaucrat &bure2, Bureaucrat &bure3)
{
    std::cout << "Results: " << std::endl;
    std::cout << bure1 << std::endl;
    std::cout << bure2 << std::endl;
    std::cout << bure3 << std::endl << std::endl;
}

int main()
{
    Bureaucrat  Persona1("Persona1", 1);
    Bureaucrat  Persona2("Persona2", 150);
    Bureaucrat  Persona3("Persona3", 75);

    Form        diagnostic("Diagnostic test", 149, 149);
    Form        tpc("TPC", 75, 75);
    Form        test("Test", 30, 30);
    Form        exam("Exam", 15, 15);

    std::cout << std::endl;
    std::cout << "------------------------- testGrade functions -------------------" << std::endl << std::endl;

    testGrade(Persona1, "Increment");
    testGrade(Persona1, "Decrement");
    testGrade(Persona2, "Decrement");
    testGrade(Persona2, "Increment");
    testGrade(Persona3, "Decrement");
    testGrade(Persona3, "Increment");

    std::cout << "------------------------- testForm functions -------------------" << std::endl << std::endl;

    testForm(Persona2, exam);
    testForm(Persona1, exam);
    testForm(Persona2, diagnostic);
    testForm(Persona3, tpc);
    testForm(Persona1, test);
    testForm(Persona1, tpc);
    
    finalResult(Persona1, Persona2, Persona3);

    std::cout << "--------------------------- Testing copy constructor Form --------------------------------- " << std::endl;

    Form test_copy(test);
    Form exam_copy;

    exam_copy = exam;

    std::cout << test_copy << std::endl;
    std::cout << exam_copy << std::endl;
    
    return 0;
}