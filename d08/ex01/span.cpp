#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( unsigned int n ) :
	_max(n),
	_v(std::vector<int>())
{
	this->_v.reserve(n);
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &
	Span::operator=( Span const & rhs )
{
	if (this != &rhs){
		this->_v = rhs._v;
		this->_max = rhs._max;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void
	Span::addNumber(int intToAdd) throw(Span::MaxReached)
{
	if (_v.size() == this->_max)
		throw Span::MaxReached();
	_v.push_back(intToAdd);
	std::sort(_v.begin(), _v.end());
}

long int
	Span::shortestSpan(void) throw(Span::NoSpan)
{
	if (this->_v.size() < 2)
		throw Span::NoSpan();
	std::vector<int>::iterator it = this->_v.begin();
	std::vector<int>::iterator itn = this->_v.begin() + 1;
	long int diff = LLONG_MAX;
	for (; itn != this->_v.end(); it++, itn++) {
		long int d = (long int)*itn - (long int)*it;
		if (d < diff)
			diff = d;
	}
	return diff;
}

long int
	Span::longestSpan(void) throw(Span::NoSpan)
{
	if (this->_v.size() < 2)
		throw Span::NoSpan();
	return ((long int)*(this->_v.end() - 1) - (long int)*(this->_v.begin()));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */