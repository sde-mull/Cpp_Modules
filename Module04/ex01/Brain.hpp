/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:33:36 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 22:14:37 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:	
		Brain();
		~Brain();
		Brain(Brain const &src);
		Brain & operator=(Brain const &rhs);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif
