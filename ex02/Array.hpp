/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:28:34 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/26 17:33:14 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stddef.h>	// NULL

template <typename T>
class Array {
	public:
		Array() : _size(0)
		{
			this->_array = new T[this->_size];
		}

		Array(unsigned int n) : _size(n)
		{
			this->_array = new T[this->_size];
		}

		Array(Array const &src) : _size(src.size())
		{
			this->_array = NULL;
			*this = src;
		}

		~Array()
		{
			if (this->_array != NULL)
				delete[] this->_array;
		}

		Array	&operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				if (this->_array != NULL) {
					delete[] this->_array;
					this->_array = NULL;
				}
				if (rhs._size != 0)
				{
					this->_size = rhs._size;
					this->_array = new T[this->_size];
					for (unsigned int i = 0; i < this->_size; i++)
						this->_array[i] = rhs._array[i];
				}
			}
			return (*this);
		}

		T		&operator[](unsigned int index)
		{
			if (index >= this->size() || this->_array == NULL)
				throw Array<T>::IndexOutOfBoundsException();
			return (this->_array[index]);
		}

		unsigned int	size(void) const
		{	
			return (this->_size);
		}
	
		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		T					*_array;
		unsigned int		_size;
};

template <typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("The Index Is Out Of Bounds");
}

#endif
