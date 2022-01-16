#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack const & src) { *this = src; }
		MutantStack(std::stack<T> const & src) { *this = src; }
		virtual ~MutantStack(void) {}
		MutantStack &	operator=(MutantStack const &rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		}
		MutantStack &	operator=(std::stack<T> const &rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() {
			return this->c.begin();
		}
		iterator	end() {
			return this->c.end();
		}

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	begin() const {
			return this->c.begin();
		}
		const_iterator	end() const {
			return this->c.end();
		}

};

#endif /* ***************************************************** MUTANTSTACK_H */