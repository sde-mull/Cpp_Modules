/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:17:15 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/12 19:36:28 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <unistd.h> 
#include <sys/time.h>
#include <fstream>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const 	_name;
		bool 				_sign;
		int	const			_gradeSign;
		int const			_gradeExecute;
	
	public:
		AForm();
		virtual ~AForm();
		AForm(std::string name, int gradeSign, int gradeExecute);
		AForm(AForm const &src);
		AForm & operator=(AForm const &rhs);

		std::string		getName(void) const;
		bool			getSign(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;

		void			beSigned(Bureaucrat &bureau);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class	FormIsNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif