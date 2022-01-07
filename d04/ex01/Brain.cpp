#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "<Brain> constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "<Brain> copy constructor" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "<Brain> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator = ( Brain const & rhs )
{
	std::cout << "<Brain> assignation operator" << std::endl;

	if ( this != &rhs )
	{
		for (int i = 0; !rhs.ideas[i].empty(); i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

std::ostream &			operator << ( std::ostream & o, Brain const & b )
{
	o << "<Brain> " << b.getStringifiedIdeas() << std::endl;
	// for (int i = 0; i < 100 && !b.ideas[i].empty(); i++) {
	// 	o << b.ideas[i] << ", ";
	// }
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int
	Brain::getIdeasCount() const {
	int i = 0;
	while (i < 100 && !this->ideas[i].empty())
		i++;
	return i;
}

void
	Brain::addIdea(std::string idea) {
		int len = this->getIdeasCount();

		if (len < 100)
			this->ideas[len] = idea;
}

std::string
	Brain::getStringifiedIdeas(void) const {
		int len = this->getIdeasCount();
		std::string ideasStr;
		for (int i = 0; i < len; i++) {
			ideasStr.append(this->ideas[i]);
			if (i < len - 1)
				ideasStr.append(", ");
		}
	return ideasStr;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */