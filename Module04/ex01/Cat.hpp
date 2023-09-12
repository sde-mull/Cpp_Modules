/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:32:45 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 22:07:26 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(Cat const &src);
		Cat & operator=(Cat const &rhs);

		virtual void makeSound(void) const;

		std::string getIdea(int index) const;
    	void    setIdea(int index, std::string idea);
};

#endif