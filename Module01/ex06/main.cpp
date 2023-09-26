/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:53:47 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/26 17:01:43 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){

    if (argc != 2){
        std::cout << "Error:\nInvalid number of arguments \nUsage: ./harlFilter \"level\"\n";
        return (1);
    }
    std::string input = argv[1];
    Harl        harlfilter;

    harlfilter.complain(input);

    return (0);
}