/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:31 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/18 23:23:48 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

	std::cout << "PmergeMe default constructor called" << std::endl;
}

PmergeMe::PmergeMe(int argc, char **argv)
{

	std::cout << "PmergeMe parametric constructor called" << std::endl;
	for (int index = 1; index < argc; index++)
		this->_SavingValues.push_back(argv[index]);
}

PmergeMe::PmergeMe(PmergeMe const &src)
{

	std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	std::cout << "PmergeMe assignment operator called" << std::endl;
	if (this != &rhs)
	{
	}

	return *this;
}

PmergeMe::~PmergeMe()
{

	std::cout << "PmergeMe destructor called" << std::endl;
}

std::vector<char *> PmergeMe::GetSavingValues(void) const
{

	return this->_SavingValues;
}

template <typename Container>
void PmergeMe::PrintList(const Container &container) const
{

	for (typename Container::const_iterator it = container.begin(); it < container.end(); it++)
		std::cout << "List value: " << *it << std::endl;
}