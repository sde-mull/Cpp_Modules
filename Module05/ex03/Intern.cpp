/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:41:50 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/12 19:42:15 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) : AForm()
{
    std::cout << "Intern Default Constructor!" << std::endl;
}

Intern::Intern(Intern const &src) : AForm(src)
{
    std::cout << "Intern Copy Constructor!" << std::endl;
    *this = src;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor!" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
        AForm::operator=(rhs);

    return *this;
}

const char *Intern::NoFormException::what() const throw()
{
    return ("This Form doesn't exist!");
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formList[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon",
    };

    for (int i = 0; i < 3; i++)
    {
        if (formList[i] == formName)
        {
            switch (i)
            {
            case 0:
                return (new RobotomyRequestForm(target));
            case 1:
                return (new ShrubberyCreationForm(target));
            case 2:
                return (new PresidentialPardonForm(target));
            }
        }
    }
    throw NoFormException();
}

void Intern::execute(Bureaucrat const &executor) const{
    std::cout << executor.getName() << " created a new Form " << std::endl;
}