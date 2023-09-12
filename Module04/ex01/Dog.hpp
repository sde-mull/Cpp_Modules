/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:33:01 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 22:07:36 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
		
	public:
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(Dog const &src);
		Dog & operator=(Dog const &rhs);

		virtual void makeSound(void) const;

		std::string getIdea(int index) const;
        void    setIdea(int index, std::string idea);
};

#endif