/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:25 by sde-mull          #+#    #+#             */
/*   Updated: 2023/06/18 01:09:41 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << GREEN"Contacts constructor called"RESET << std::endl;
}

Contact::~Contact(void)
{
	std::cout << YELLOW"Contacts destructor called"RESET << std::endl;
}