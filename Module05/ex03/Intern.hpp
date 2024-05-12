/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:42:02 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/12 19:40:37 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : virtual public AForm
{
    public:
        Intern(void);
        Intern( Intern const & src);
        virtual ~Intern(void);

        Intern & operator=(Intern const & rhs);

        AForm * makeForm(std::string formName, std::string target);
        
        virtual void	execute(Bureaucrat const & executor) const;

        class NoFormException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif