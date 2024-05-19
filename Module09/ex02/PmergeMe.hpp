/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/18 23:21:52 by sde-mull         ###   ########.fr       */
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
#include <map>

class PmergeMe
{
    private:
        std::map<int, bool> _CheckRepeatedNumbers;
        std::vector<char *>   _SavingValues;

    public:
        PmergeMe();
        PmergeMe(int argc, char **argv);
        PmergeMe( PmergeMe const & src);
        ~PmergeMe();

        PmergeMe & operator=(PmergeMe const & rhs);

        std::vector<char *> GetSavingValues( void ) const;
        
        template <typename Container> void PrintList( const Container& container ) const;

};

#endif