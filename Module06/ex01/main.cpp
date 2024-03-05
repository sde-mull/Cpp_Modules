/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:31:32 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/05 00:10:18 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *data = new Data;
	data->number = 423;
	data->str = "TestingABC";
	Data *testing;

	uintptr_t raw = Serializer::serialize(data);

	std::cout << data->number << " " << data->str << std::endl;
	std::cout << "Adress of Data Struct: " << data << std::endl;
	std::cout << "Serialized Adress of Data Struct: " << raw << std::endl;

	testing = Serializer::deserialize(raw);
	std::cout << "Testing Adress of Data Struct: " << testing << std::endl;
	std::cout << "Data Adress of Data Struct: " << data << std::endl;
	
	std::cout << data->number << " " << data->str << std::endl;
	
	delete data;
    return (0);
}