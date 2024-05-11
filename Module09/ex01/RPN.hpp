/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/11 02:16:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <deque>
#include <string>
#include <sstream>
#include <stdexcept>
#include <stack>

class RPN
{
    private:
        std::stack<int> _Numbers;
        std::string     _Expression;

    public:
        RPN();
        RPN(char *expression);
        RPN( RPN const & src);
        ~RPN();

        RPN & operator=(RPN const & rhs);

        void    Start( void );
        void    printStack( void ) const;
        int     Calculate(int first, int second, char operation);

};

#endif