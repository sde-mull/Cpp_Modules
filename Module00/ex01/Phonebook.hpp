/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:36:18 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/22 17:21:39 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		unsigned int current_index;
		unsigned int max_index;
	public:
		PhoneBook();
		void Menu(void);
		void Add(void);
		void Search(void);
		void check_max_index(void);
		~PhoneBook();
};

#endif