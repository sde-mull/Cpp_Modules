/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:53:47 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/06 23:51:25 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <typename T>

class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>()
	{
		std::cout << "MutantStack default constructor called" << std::endl;
	};
	MutantStack(const MutantStack &copy) : std::stack<T>(copy)
	{
		std::cout << "MutantStack copy constructor called" << std::endl;
	};
	MutantStack &operator=(const MutantStack &other)
	{
		std::cout << "MutantStack assignment operator called" << std::endl;
		if (this != &other)
			static_cast<std::stack<T> &>(*this) = static_cast<const std::stack<T> &>(other);
		return *this;
	}
	~MutantStack()
	{
		std::cout << "MutantStack destructor called" << std::endl;
	};
	typedef typename std::deque<T>::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};
#endif