/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/24 23:02:58 by sde-mull         ###   ########.fr       */
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
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
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
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
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
    Bureaucrat  Einstein("Einstein", 1);
    Bureaucrat  Dumbass("Dumbass", 150);
    Bureaucrat  Arthur("Arthur", 75);

    Form        diagnostic("Diagnostic test", 149, 149);
    Form        tpc("TPC", 75, 75);
    Form        test("Test", 30, 30);
    Form        exam("Exam", 15, 15);

    testGrade(Einstein, "Increment");
    testGrade(Einstein, "Decrement");
    testGrade(Dumbass, "Decrement");
    testGrade(Dumbass, "Increment");
    testGrade(Arthur, "Decrement");
    testGrade(Arthur, "Increment");

    testForm(Dumbass, exam);
    testForm(Einstein, exam);
    testForm(Dumbass, diagnostic);
    testForm(Arthur, tpc);
    testForm(Einstein, test);
    testForm(Einstein, tpc);
    
    finalResult(Dumbass, Einstein, Arthur);
    
    return 0;
}