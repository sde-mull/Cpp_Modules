/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:02:58 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/06 22:10:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T> void swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T const & min(T const &x, T const &y) {
	if (x < y)
		return x;
	return y;
}

template <typename T> T const & max(T const &x, T const &y) {
	if (x > y)
		return x;
	return y;
}

#endif