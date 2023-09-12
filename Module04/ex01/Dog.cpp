/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:05:12 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 22:17:31 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog parametric constructor" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
        for (int i = 0; i < 100; i++)
            this->brain->setIdea(i, rhs.brain->getIdea(i));
    }
    
    return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "ÃO ÃO!!" << std::endl;
}

std::string Dog::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Dog::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}