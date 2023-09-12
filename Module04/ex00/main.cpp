/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:47:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 19:07:56 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	std::cout << std::endl;
	k->makeSound(); 
	l->makeSound();
	std::cout << std::endl;
    meta->makeSound();
	std::cout << std::endl;
    
	delete l;
	delete k;
	delete i;
	delete j;
	delete meta;

	return 0; 
}