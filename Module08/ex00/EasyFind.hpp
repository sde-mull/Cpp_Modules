/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:02:58 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/11 23:01:30 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

class IntegerNotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "";
	}
};

template <typename T>
void EasyFind(T &container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number);
	if (it == container.end())
	{
		std::cout << "Integer not Found: " << number << std::endl;
		throw IntegerNotFoundException();
	}
	std::cout << "Integer Found: " << *it << std::endl;
}

#endif