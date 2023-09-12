/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:02:03 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 22:17:26 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat parametric constructor" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
        for (int i = 0; i < 100; i++)
            this->brain->setIdea(i, rhs.brain->getIdea(i));
    }

    return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miauu" << std::endl;
}

std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}