/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:36:59 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/06 19:54:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Base Destructor Called" << std::endl;
}

Base *Base::generate()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int rand_nbr = rand() % 4;

    switch (rand_nbr)
    {
    case (1):
		std::cout << "Got A" << std::endl;
        return (new A());
    case (2):
		std::cout << "Got B" << std::endl;
        return (new B());
    case (3):
		std::cout << "Got C" << std::endl;
        return (new C());
    }
    return (NULL);
}

void Base::identify(Base *p)
{
    std::cout << "Entered Base pointer" << std::endl;

    if (dynamic_cast<A *>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Class C" << std::endl;
    else
        std::cout << "None of A,B or C" << std::endl;
}

void Base::identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl;
		std::cerr << e.what() << '\n';
	}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl;
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl;
		std::cerr << e.what() << '\n';
	}
	return ;
}