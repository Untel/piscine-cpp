/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:09:17 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 07:39:52 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <exception>

class NotFound : public std::exception
{
	public:
		const char* what() const throw(){
			return ("404 int not found");
		}
};

template<typename T>
int easyfind(T & el, int i)
{
	typename T::iterator it = std::find(el.begin(), el.end(), i);
	if (it == el.end())
		throw NotFound();	
	return *it;
}
#endif // EASYFIND_HPP