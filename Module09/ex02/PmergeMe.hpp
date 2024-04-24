/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:28 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/22 19:45:54 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>

class PmergeMe
{
    private:
        std::list<unsigned int>     _list;
        std::vector<unsigned int>   _vector;
        double                      _timeList;
        double                      _timeVector;
        PmergeMe();
        void    sortedList(void);
        void    sortedVector(void);

    public:
        PmergeMe(char **numbers);
        PmergeMe( PmergeMe const & src);
        ~PmergeMe();

        PmergeMe & operator=(PmergeMe const & rhs);

        void    show(char **argv);
};

#endif