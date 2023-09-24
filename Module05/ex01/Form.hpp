/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:17:15 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/24 22:51:20 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const 	_name;
		bool 				_sign;
		int	const			_gradeSign;
		int const			_gradeExecute;
	
	public:
		Form();
		~Form();
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const &src);
		Form & operator=(Form const &rhs);

		std::string		getName(void) const;
		bool			getSign(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;

		void			beSigned(Bureaucrat &bureau);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowToSignException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	FormIsAlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif