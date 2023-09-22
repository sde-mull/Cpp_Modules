/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:26:25 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 19:46:03 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		bool				_sign;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string const 	_name;

	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(AForm const &src);
		AForm & operator=(AForm const &rhs);

		bool				getSign(void) const;
		int const			getGradeToSign(void) const;
		int	const			getGradeToExecute(void) const;
		std::string const 	getName(void) const;

		void	execute(Bureaucrat const & bureau) const;
		void	beSigned(Bureaucrat &bureau);
		
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

		class	GradeIsNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		virtual void message(void) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif