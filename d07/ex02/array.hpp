/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:09:17 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 02:11:14 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

template <typename T>
class Array {
    private:
		T *_elements;
		size_t _count;

	public:
		Array(void) :
            _elements(NULL),
            _count(0)
        {}

		Array(size_t count) :
            _elements(new T[count]()),
            _count(count)
        {}

		~Array(void)
		{
			if (this->_elements != NULL)
				delete [] this->_elements;
		}

		Array(Array const &src) :
            _elements(NULL),
            _count(0)
		{
			*this = src;
		}

		Array const &
            operator = (Array const &rhs)
		{
			if (&rhs == this)
				return *this;
			if (this->size() != rhs.size())
			{
				if (this->_elements != NULL)
					delete [] this->_elements;
				this->_elements = new T[rhs.size()];
			}
			this->_count = rhs.size();
			for (size_t i = 0; i < rhs.size(); i++)
				this->_elements[i] = rhs._elements[i];
			return *this;
		}

		T &
            operator [] (size_t i) const
		{
			if (!this->_elements
                || i < 0
                || i >= this->_count
            )
				throw std::exception();
			return this->_elements[i];
		}

		size_t
            size(void) const
		{
			return this->_count;
		}
};

#endif // !ARRAY_HPP