/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:26:25 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 17:23:06 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		bool				_sign;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string const 	_name;

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(Form const &src);
		Form & operator=(Form const &rhs);

		bool				getSign(void) const;
		int const			getGradeToSign(void) const;
		int	const			getGradeToExecute(void) const;
		std::string const 	getName(void) const;

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
		
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif