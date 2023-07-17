/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:59:14 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/14 21:56:08 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedcpp.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4){
		std::cerr << B_RED "Error:\nWrong number of arguments\n" B_YELLOW 
			"Usage: <filename> <string1> <string2>" RESET << std::endl;
		return(1);
	}

	Sedcpp newfile(argv[1]);
	if (!newfile.replace(argv[2], argv[3]))
		return (1);
	return(0);
}