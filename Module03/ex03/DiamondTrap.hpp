/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:09:33 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/08 16:33:14 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	 public:
	 	DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap( DiamondTrap const & src);
        ~DiamondTrap(void);

        DiamondTrap & operator=(DiamondTrap const & rhs);

		void whoAmI();
};

#endif