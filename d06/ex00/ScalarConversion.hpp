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