/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:06:06 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 16:16:49 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_gun;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif