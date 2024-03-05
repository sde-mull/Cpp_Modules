/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:38:49 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/05 00:23:02 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
    Base *base = NULL;
    base = base->generate();
    std::cout << "ID by ptr: ";
    base->identify(base);
    std::cout << "ID by ref: ";
    base->identify(*base);
    delete base;
}