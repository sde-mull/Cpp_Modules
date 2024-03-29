/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:59:33 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/25 02:31:50 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTTOMYREQUESTFORM_HPP
# define ROBOTTOMYREQUESTFORM_HPP

#include <unistd.h> 
#include <sys/time.h>
#include <fstream>
#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);

		std::string getTarget(void) const;

		virtual void task() const;
};

#endif