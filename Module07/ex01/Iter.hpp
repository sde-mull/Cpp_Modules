/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:32:12 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/08 15:17:46 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void printElem(T &t)
{
    std::cout << t << std::endl;
}

template <typename T>
void iter(T *arr, unsigned int len, void (*function)(T &elem))
{
    for (unsigned int i = 0; i < len; i++)
        function(arr[i]);
}

#endif