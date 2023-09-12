/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:47:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/10 23:26:54 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int N = 10;
	const Animal **Vet = new const Animal*[10];
	for (int i = 0; i < N ; i++) {
		if (i % 2) {
			Vet[i] = new Dog();
		}
		else {
			Vet[i] = new Cat();
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < N ; i++) {
		Vet[i]->makeSound();
	}
	std::cout <<std::endl;
	for (int i = 0; i < 10 ; i++) {
		delete Vet[i];
		std::cout << std::endl;
	}
	delete[] Vet;
	return 0;
}