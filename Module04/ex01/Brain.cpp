/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:33:17 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 21:45:52 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default Constructor!" << std::endl;
}

Brain::Brain( Brain const & src)
{
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain Destructor!" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.getIdea(i);
    }
    
    return *this;
}

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}