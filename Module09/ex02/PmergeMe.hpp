/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/18 00:11:12 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <deque>
#include <string>
#include <sstream>
#include <stdexcept>
#include <stack>

class PmergeMe
{
    private:
        std::stack<int> _Numbers;
        std::string     _Expression;

    public:
        PmergeMe();
        PmergeMe(char *expression);
        PmergeMe( PmergeMe const & src);
        ~PmergeMe();

        PmergeMe & operator=(PmergeMe const & rhs);

        void    Start( void );
        void    printStack( void ) const;
        int     Calculate(int first, int second, char operation);

};

#endif