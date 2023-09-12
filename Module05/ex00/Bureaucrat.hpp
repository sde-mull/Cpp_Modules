/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:41 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/12 17:23:11 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string const 	_name;
		int 				_grade;
		
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat & operator=(Bureaucrat const &rhs);

		std::string getName(void);
		int			getGrade(void);

		void		Increment();
		void		Decrement();
};