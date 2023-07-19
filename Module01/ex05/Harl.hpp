/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:04:09 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/18 16:34:20 by sde-mull         ###   ########.fr       */
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


	public:
    	Harl();
    	~Harl();
		void        complain( std:: string level );

};

#endif