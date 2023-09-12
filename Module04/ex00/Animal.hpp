/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:31:40 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/09 20:40:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal const &src);
		Animal & operator=(Animal const &rhs);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif