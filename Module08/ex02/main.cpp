/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:38:49 by sde-mull          #+#    #+#             */
/*   Updated: 2024/05/07 23:48:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5); 
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout << "It is this value before ++it " << *it << std::endl;
        ++it;
        std::cout << "It is this value after ++it " << *it << std::endl;
        --it;
        std::cout << "It is this value after --it " << *it << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
        ++it; }
        std::stack<int> s(mstack);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        std::list<int> mstack;

        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);

        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        std::cout << "It is this value before ++it " << *it << std::endl;
        ++it;
        std::cout << "It is this value after ++it " << *it << std::endl;
        --it;
        std::cout << "It is this value after --it " << *it << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    {
        MutantStack<int> mstack;
        mstack.push(1);
        mstack.push(2);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(2);
        mstack.push(3); 
        mstack.push(4);
        mstack.push(5);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout << "It is this value before ++it " << *it << std::endl;
        ++it;
        std::cout << "It is this value after ++it " << *it << std::endl;
        --it;
        std::cout << "It is this value after --it " << *it << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
        ++it; }
        std::stack<int> s(mstack);
    }
    return 0;
}