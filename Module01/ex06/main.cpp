/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:53:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/07/18 16:58:58 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){

    if (argc != 2){
        return (std::cout << "Error:\nInvalid number of arguments \nUsage: ./harlFilter \"level\"\n", EXIT_FAILURE);
    }
    std::string input = argv[1];
    Harl        harlfilter;

    harlfilter.complain(input);

    return (0);
}