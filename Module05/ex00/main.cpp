/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/24 22:09:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
            std::cout << bure.getName() << "Decrement Grade for: " << bure.getGrade() + 1 << std::endl;
            bure.decrementGrade();
        }

        std::cout << bure << std::endl << std::endl;
        
    }  catch(const std::exception& e) {
        
        std::cout << "Erro: " << e.what() << std::endl << std::endl;
    
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
    Bureaucrat  Einstein("Einstein", 1);
    Bureaucrat  Dumbass("Dumbass", 150);

    testGrade(Einstein, "Increment");
    testGrade(Einstein, "Decrement");
    testGrade(Dumbass, "Decrement");
    testGrade(Dumbass, "Increment");
    
    finalResult(Dumbass, Einstein);
    
    return 0;
}