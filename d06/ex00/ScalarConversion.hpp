/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:35:32 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/13 16:35:37 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include <bits/stdc++.h>
# include "utils.hpp"

class ScalarConversion
{

	public:

		ScalarConversion(std::string input);
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion();

		ScalarConversion &		operator=( ScalarConversion const & rhs );

		const std::string		getInt(void) const;
		const std::string		getDouble(void) const;
		const std::string		getFloat(void) const;
		const std::string		getChar(void) const;

	private:
		int			_int;
		char		_char;
		float 		_float;
		double		_double;
		std::string	_input;

};

std::ostream &			operator<<( std::ostream & o, ScalarConversion const & i );

#endif /* ************************************************ SCALARCONVERSION_H */