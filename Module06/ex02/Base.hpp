/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:37:01 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/05 00:27:35 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class Base
{
    public:
        virtual ~Base();

        static Base* generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

class A : public Base {};
class B : public Base  {};
class C : public Base {};

#endif