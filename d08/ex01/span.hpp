#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <climits>
// # include <limits>


class Span
{
	
	public:
		Span( unsigned int n );
		Span( Span const & src );
		~Span();

		class MaxReached : public std::exception{
			public:
				const char* what() const throw(){
					return ("Maximum count of numbers reached");
			}
		};
		class NoSpan : public std::exception{
			public:
				const char* what() const throw(){
					return ("No span to find because less than 2 args");
			}
		};

		Span &		operator=( Span const & rhs );
		void	addNumber(int nbr) throw(Span::MaxReached);

		template <typename T>
		void	addNumber(typename T::iterator begin, typename T::iterator end) throw(Span::MaxReached)
		{
			if (std::distance(begin, end) + _v.size() > _max)
				throw Span::MaxReached();
			_v.insert(_v.end(), begin, end);
			std::sort(_v.begin(), _v.end());
		}

		long int		shortestSpan(void) throw(Span::NoSpan);
		long int		longestSpan(void) throw(Span::NoSpan);

	private:
		Span(void);
		unsigned int		_max;
		std::vector<int>	_v;
};

#endif /* ************************************************************ SPAN_H */