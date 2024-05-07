/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:32:12 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/07 23:27:14 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>


#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define MAGENTA		"\033[35m"
#define CYAN		"\033[36m"
#define WHITE		"\033[37m"
#define RESET		"\033[0m"

#define B_BLACK		"\033[1;30m"
#define B_RED		"\033[1;31m"
#define B_GREEN		"\033[1;32m"
#define B_YELLOW	"\033[1;33m"
#define B_BLUE		"\033[1;34m"
#define B_MAGENTA	"\033[1;35m"
#define B_CYAN		"\033[1;36m"
#define B_WHITE		"\033[1;37m"
#define RESET		"\033[0m"
//.........................
#define RANGE 10

class Span
{
private:
    unsigned int _N;
    std::vector<int> _List;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &src);
    Span &operator=(const Span &src);
    ~Span();

    // Getters
    unsigned int GetN(void) const;
    unsigned int GetCurrentVectorSize(void) const;
    std::vector<int> GetList(void) const;

    // fucntions
    void addNumber(int Number);
    void addListNumber(unsigned int quantity, int min, int max);
    int shortestSpan(void) const;
    int longestSpan(void) const;

    void PrintList(void) const;

    class LimitReachedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class NotEnoughNumbersListException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif