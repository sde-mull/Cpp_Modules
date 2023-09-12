/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:47:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/12 16:57:02 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wAnimal = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();
    
    std::cout << std::endl << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wCat->getType() << " " << std::endl << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    wAnimal->makeSound();
    wCat->makeSound();

    std::cout << std::endl;

    delete i;
    delete j;
    delete wAnimal;
    delete wCat;

    return 0;
}