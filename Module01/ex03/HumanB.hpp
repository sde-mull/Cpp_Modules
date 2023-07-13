/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:06:06 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/13 22:07:21 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*gun;

	public:
		HumanB();
		HumanB(std::string weapon);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif