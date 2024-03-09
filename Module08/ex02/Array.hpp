/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:37:01 by sde-mull          #+#    #+#             */
/*   Updated: 2024/03/08 18:08:34 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

template <typename T>
class	Array {
    private: 
        T *_arr;
        unsigned int _size;
	public:
        Array<T>() : _size(0){
            std::cout << "Default Template Array Class Constructor Called" << std::endl;
            _arr = new T[0];
        }

        Array<T>(unsigned int len) : _size(len){
            std::cout << "Parametric Template Array Class Constructor Called" << std::endl;
            _arr = new T[len];
        }
        
        Array<T>(const Array<T> &copy) : _size(copy._size)
		{
			std::cout << "Copy Template Array Class Constructor Called" << std::endl;
			_arr = new T[copy.Size()];
			for (unsigned int i = 0; i < copy.Size(); i++)
				_arr[i] = copy._arr[i];
		}
        
		Array<T> & operator=(const Array<T> &rhs)
		{
			std::cout << "Assignment Operator Template Array Class Constructor Called" << std::endl;
			if (this != &rhs)
			{
				delete [] _arr;
				_arr = new T[rhs.Size()];
				for (unsigned int i = 0; i < rhs.Size(); i++)
					_arr[i] = rhs._arr[i];
			}
			return *this;
		}
        
		~Array<T>()
		{
			std::cout << "Destructor Template Array Class Constructor Called" << std::endl;
			delete [] _arr;
		}

        T & operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("The index inserted is not inside the range expected");
			return _arr[index];
		}
        
        unsigned int Size() const{
            return (_size);
        }

        void	printArray(void)
		{
			for (unsigned int i = 0; i < _size; i++)
				std::cout << _arr[i] << std::endl;
		}
        
};

#endif