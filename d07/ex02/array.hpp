/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:09:17 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 04:15:01 by adda-sil         ###   ########.fr       */
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
		unsigned int _n;

	public:
		Array(void) :
            _elements(NULL),
            _n(0)
        {}

		Array(unsigned int count) :
            _elements(new T[count]()),
            _n(count)
        {}

		~Array(void)
		{
			if (this->_elements != NULL)
				delete [] this->_elements;
		}

		Array(Array const &src) :
            _elements(NULL),
            _n(0)
		{
			*this = src;
		}

		class OutOfLimits : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Out of limits");
				}
		};

		Array const &
            operator = (Array const &rhs)
		{
			if (&rhs == this)
				return *this;
			delete [] this->_elements;
			this->_elements = new T[rhs.size()];
			this->_n = rhs._n;
			for (size_t i = 0; i < rhs.size(); i++)
				this->_elements[i] = rhs._elements[i];
			return *this;
		}

		T &
            operator [] (size_t i) const
		{
			if (i < 0 || i >= this->_n)
				throw Array::OutOfLimits();
			return this->_elements[i];
		}

		size_t
            size(void) const
		{
			return (size_t)this->_n;
		}
};

#endif // !ARRAY_HPP