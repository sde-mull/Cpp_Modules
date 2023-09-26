/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:04:09 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 17:28:42 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class   Harl
{
	private:
    	void    debug(void );
    	void    info(void );
    	void    warning(void );
    	void    error(void );
		typedef void (Harl::*func)();
		func fun[4];

	public:
    	Harl();
    	~Harl();
		void        complain( std:: string level );
		void		print_level(int i);

};

#endif