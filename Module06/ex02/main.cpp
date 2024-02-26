/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:38:49 by sde-mull          #+#    #+#             */
/*   Updated: 2024/02/12 20:38:50 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base* base_ptr = Base::generate();
    Base::identify(base_ptr);
    Base::identify(*base_ptr);
    
    return (0);
}