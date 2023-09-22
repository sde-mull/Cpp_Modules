/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:25:50 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 20:01:46 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	// Junior shouldn't run Robot -> not signed
	std::cout << std::endl;
	std::cout << std::endl;
	{
		RobotomyRequestForm Robot_Form("you");
		PresidentialPardonForm Pres_Form("Me");
		ShrubberyCreationForm TreeLover("Hippie");
		std::cout << std::endl;

		Bureaucrat Junior("Junior", 3);
		Bureaucrat Senior("Senior", 1);
		std::cout << std::endl;

		try{
			TreeLover.beSigned(Senior);
			TreeLover.execute(Junior);
			Pres_Form.beSigned(Junior);
			Pres_Form.execute(Junior);
			Robot_Form.execute(Junior);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// Junior shouldn't run Presidential -> Grade < executionGrade
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	// {
	// 	// RobotomyRequestForm Robot_Form("you");
	// 	PresidentialPardonForm Pres_Form("Me");
	// 	// ShrubberyCreationForm TreeLover("Hippie");
	// 	std::cout << std::endl;

		
	// 	Bureaucrat Junior("Junior", 50);
	// 	Bureaucrat Senior("Senior", 5);
	// 	std::cout << std::endl;

	// 	try{
	// 		Pres_Form.beSigned(Senior);
	// 		Senior.executeForm(Pres_Form);
	// 		Pres_Form.beSigned(Junior);
	// 		Junior.executeForm(Pres_Form);
	// 	}
	// 	catch (std::exception &error) {
	// 		std::cerr << error.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// // Senior should sign and execute, Junior should sign but not execute
	// {
	// 	RobotomyRequestForm Robot_Form("you");
	// 	std::cout << std::endl;

	// 	Bureaucrat Senior("Senior", 43);
	// 	Bureaucrat Junior("Junior", 70);
	// 	std::cout << std::endl;

	// 	try{
	// 		Robot_Form.beSigned(Senior);
	// 		Senior.executeForm(Robot_Form);
	// 		Robot_Form.beSigned(Junior);
	// 		Junior.executeForm(Robot_Form);
	// 	}
	// 	catch (std::exception &error) {
	// 		std::cerr << error.what() << std::endl;
	// 		std::cout << std::endl;
	// 		std::cout << std::endl;
	// 	}
	// }
}