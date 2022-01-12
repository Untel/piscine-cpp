# include "ScalarConversion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConversion::ScalarConversion(std::string input) :
	_input(input)
{
	const char *str = input.c_str();
	if (is_int(input)) {
		long int parsed = atol(str);
		if (parsed > INT_MAX || parsed < INT_MIN) {
			#ifdef DEBUG
				std::cout << "Reach max size " << parsed << " > " << INT_MAX << " < " << INT_MIN << std::endl;
			#endif // DEBUG
			throw std::string("Error: can't cast from overflowed INT");
		}
		this->_int = static_cast<int>(parsed);
		#ifdef DEBUG
			std::cout << "DBG => Is int " << this->_int << std::endl;
		#endif // DEBUG
		this->_double = static_cast<double>(_int);
		this->_float = static_cast<float>(_int);;
		this->_char = static_cast<char>(_int);
	} else if (is_char(input)) {
		this->_char = static_cast<char>(input.at(0));
		#ifdef DEBUG
			std::cout << "DBG => Is char " << this->_char << std::endl;
		#endif // DEBUG
		this->_double = static_cast<double>(_char);
		this->_float = static_cast<float>(_char);
		this->_int = static_cast<int>(_char);
	} else if (is_double(input)) {
		this->_double = static_cast<float>(atof(str));
		#ifdef DEBUG
			std::cout << "DBG => Is double " << this->_double << std::endl;
		#endif // DEBUG
		this->_char = static_cast<char>(_double);
		this->_float = static_cast<float>(_double);
		this->_int = static_cast<int>(_double);
	} else if (is_float(input)) {
		this->_float = static_cast<float>(atof(str));
		#ifdef DEBUG
			std::cout << "DBG => Is float " << this->_float << std::endl;
		#endif // DEBUG
		this->_char = static_cast<char>(_float);
		this->_double = static_cast<double>(_float);
		this->_int = static_cast<int>(_float);
	} else {
		#ifdef DEBUG
			std::cout << "Is nothing " << this->_input << std::endl;
		#endif // DEBUG
		throw std::string("Error: Unknow literal type");
	}
}

ScalarConversion::ScalarConversion( const ScalarConversion & src )
{
	(*this) = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConversion::~ScalarConversion()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConversion &				ScalarConversion::operator=( ScalarConversion const & rhs )
{
	if ( this != &rhs )
	{
		this->_char = rhs._char;
		this->_double = rhs._double;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_input = rhs._input;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConversion const & i )
{
	o << "char: " << i.getChar() << std::endl
		<< "int: " << i.getInt() << std::endl
		<< "float: " << i.getFloat() << std::endl
		<< "double: " << i.getDouble() << std::endl
	;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
const std::string
	ScalarConversion::getInt() const
{
	if (this->_float > INT_MAX
		|| this->_float < INT_MIN
		|| std::isnan(this->_float))
		return "impossible";
	std::ostringstream sstream;
	sstream << this->_int;
	return sstream.str();
}

const std::string
	ScalarConversion::getDouble() const
{
	std::ostringstream sstream;
	sstream << this->_double;
	if (this->_double == this->_int)
		sstream << ".0";
	return sstream.str();
}

const std::string
	ScalarConversion::getFloat() const
{
	std::ostringstream sstream;
	sstream << this->_float;
	if (this->_float == this->_int)
		sstream << ".0";
	sstream << "f";
	return sstream.str();
}

const std::string
	ScalarConversion::getChar() const
{
	if (this->_float > CHAR_MAX
		|| this->_float < CHAR_MIN
		|| std::isnan(this->_float))
		return "impossible";
	if (!is_displayable(this->_char))
		return "Non displayable";
	std::string str("' '");
	str[1] = this->_char;
	return str;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */