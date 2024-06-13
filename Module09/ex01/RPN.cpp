/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:28:31 by sde-mull          #+#    #+#             */
/*   Updated: 2024/06/13 15:05:02 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

RPN::RPN() {
    std::cout << "RPN default constructor called" << std::endl;
}

RPN::RPN(char *expression) {
    std::cout << "RPN default constructor called" << std::endl;

    this->_Expression = std::string(expression);
}


RPN::~RPN() {

    std::cout << "RPN destructor called" << std::endl;
}

RPN::RPN( RPN const & src)
{
    std::cout << "RPN copy constructor called" << std::endl;
    *this = src;
}

RPN & RPN::operator=(RPN const & rhs)
{
    std::cout << "RPN assignment operator called" << std::endl;
    if (this != &rhs)
        this->_Numbers = rhs._Numbers;
    
    return *this;
}

void RPN::Start( void ){

    int checkSpace = 1;

    if (this->_Expression.size() <= 4)
        throw std::invalid_argument("Error");
    
    for (std::string::iterator it = this->_Expression.begin(); it != this->_Expression.end(); it++){
        

         if (*it != '*' && *it != '-' &&
            *it != '+' && *it != '/' && 
            !(*it >= '0' && *it <= '9') && *it != ' ')
            throw std::invalid_argument("Error");
        if (*it >= '0' && *it <= '9'){
            if (checkSpace == 0)
                throw std::invalid_argument("Error");
            this->_Numbers.push(*it - '0');
            checkSpace = 0;
        }
        if (*it == '*' || *it == '/' || *it == '+' || *it == '-'){
            if (checkSpace == 0)
                throw std::invalid_argument("Error");
            if (this->_Numbers.size() < 2)
                throw std::invalid_argument("Error");
            int second = this->_Numbers.top();
            this->_Numbers.pop();
            int first = this->_Numbers.top();
            this->_Numbers.pop();
            this->_Numbers.push(Calculate(first, second, *it));
            checkSpace = 0;
        }
        if (checkSpace == 1)
            throw std::invalid_argument("Error");
        if (*it == ' ')
            checkSpace = 1;
    }

    if (this->_Numbers.size() > 1)
        throw std::invalid_argument("Error");
    
    
    std::cout << "Result: " << this->_Numbers.top() << std::endl;

}

void RPN::printStack(void) const{
    
   std::stack<int> tempStack = _Numbers;

    while (!tempStack.empty()) {
        std::cout << tempStack.top() << std::endl;
        tempStack.pop();
    }
}

int    RPN::Calculate(int first, int second, char operation){
    
    if (operation == '+') 
        return (first + second);
    else if (operation == '-')
        return (first - second);
    else if (operation == '*')
        return (first * second);
    else if (operation == '/'){
        if (second == 0)
            throw std::invalid_argument("Error");
        return (first / second);
    }
    throw std::invalid_argument("Error");
}
