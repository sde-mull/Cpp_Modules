/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:03:55 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/13 23:23:57 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{

	std::cout << "Span constructor called" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{

	std::cout << "Span Parametric constructor called" << std::endl;
}

Span::Span(const Span &src)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	std::cout << "Span Assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_N = src.GetN();
		this->_List = src.GetList();
	}
	return (*this);
}

Span::~Span()
{

	std::cout << "Span destructor called" << std::endl;
}

unsigned int Span::GetN(void) const
{

	return (this->_N);
}

unsigned int Span::GetCurrentVectorSize(void) const
{

	return (this->_List.size());
}

std::vector<int> Span::GetList(void) const
{

	return (this->_List);
}

void Span::PrintList(void) const
{
	for (std::vector<int>::const_iterator it =this->_List.begin(); it != this->_List.end(); it++)
	{
		std::cout << *it << ", ";
	}
	std::cout << std::endl;
}

void Span::addNumber(int Number)
{
	if (static_cast<unsigned int>(this->_List.size()) < this->_N)
		this->_List.push_back(Number);
	else{
		std::cout << RED << "Oh No!! Something went wrong :(" << RESET << std::endl;
		throw(LimitReachedException());
	}
}

void Span::addListNumber(unsigned int quantity, int min, int max){

	int randomValue;

	srand(time(NULL));
	for (unsigned int i = 0; i < quantity; i++){
		
		randomValue = rand() % (max - min + 1) + min;
		if (randomValue >= min && randomValue <= max){
			std::cout << "Adding Number to the List: " << randomValue << std::endl;
			this->addNumber(randomValue);
		}
	}
	sort(this->_List.begin(), this->_List.end());
}


int Span::shortestSpan(void) const
{

	unsigned int span;

	if (this->_List.size() == 0 || this->_List.size() == 1)
		throw(NotEnoughNumbersListException());

	std::vector<int>::const_iterator first = this->_List.begin();
	std::vector<int>::const_iterator second = this->_List.begin() + 1;
	span = std::abs(*second - *first);

	while (first != this->_List.end())
	{

		second = first + 1;
		while (second != this->_List.end())
		{

			if (static_cast<unsigned int>(std::abs(*second - *first)) < span)
				span = std::abs(*second - *first);
			second++;
		}
		first++;
	}

	return (span);
}

int Span::longestSpan(void) const
{

	unsigned int span;

	if (this->_List.size() == 0 || this->_List.size() == 1)
		throw(NotEnoughNumbersListException());

	std::vector<int>::const_iterator first = this->_List.begin();
	std::vector<int>::const_iterator second = this->_List.begin() + 1;
	span = std::abs(*second - *first);

	while (first != this->_List.end())
	{

		second = first + 1;
		while (second != this->_List.end())
		{

			if (static_cast<unsigned int>(std::abs(*second - *first)) > span)
				span = std::abs(*second - *first);
			second++;
		}
		first++;
	}

	return (span);
}

const char *Span::LimitReachedException::what() const throw()
{
	return ("List is full, cannot accept any more numbers");
}

const char *Span::NotEnoughNumbersListException::what() const throw()
{
	return ("List needs to be at least of size 2");
}