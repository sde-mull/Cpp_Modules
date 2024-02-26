/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:21:01 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/13 15:48:30 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << "Usage: ./convert <Literal>" << std::endl;
	}
	ScalarConverter::convert(argv[1]);
    return (0);
}