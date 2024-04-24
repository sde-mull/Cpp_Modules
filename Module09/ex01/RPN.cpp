/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:31 by sde-mull          #+#    #+#             */
/*   Updated: 2024/04/22 19:49:28 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

RPN::RPN() {}

int calculation(int first, int second, char optr)
{
    if (optr == '+') 
        return (first + second);
    if (optr == '-')
        return (first - second);
    if (optr == '*')
        return (first * second);
    return (first / second);
}

RPN::RPN(char *numbers)
{
    int size = 0;

    while (numbers[size])
        size++;
    if (size < 1 && !(numbers[0] >= '0' && numbers[0] <= '9'))
        throw std::invalid_argument("Error");
    for (int i = 0; i < size; i++)
    {   
        if (numbers[i] != '*' && numbers[i] != '-' &&
            numbers[i] != '+' && numbers[i] != '/' && 
            !(numbers[i] >= '0' && numbers[i] <= '9'))
            throw std::invalid_argument("Error");

        if (numbers[i] >= '0' && numbers[i] <= '9')
            this->calculate.push(numbers[i] - '0');
        else
        {
            if (this->calculate.size() < 2)
                throw std::invalid_argument("Error");
            else
            {
                int second = this->calculate.top();
                this->calculate.pop();
                int first = this->calculate.top();
                this->calculate.pop();
                int result = calculation(first, second, numbers[i]);
                this->calculate.push(result);
            }
        }
        if (numbers[++i] != ' ' && numbers[i] != '\0')
            throw std::invalid_argument("Error");
    }
    
}

RPN::~RPN() {}

RPN::RPN( RPN const & src)
{
    *this = src;
}

RPN & RPN::operator=(RPN const & rhs)
{
    if (this != &rhs)
        this->calculate = rhs.calculate;
    
    return *this;
}

void RPN::result(void)
{
    if (this->calculate.size() == 1)
        std::cout << this->calculate.top() << std::endl; 
}