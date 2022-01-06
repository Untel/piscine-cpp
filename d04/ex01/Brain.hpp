#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &			operator = ( Brain const & rhs );
		std::string		ideas[100];

		void			addIdea(std::string idea);
		std::string		getStringifiedIdeas(void) const;
		int				getIdeasCount(void) const;
};

std::ostream &			operator<<( std::ostream & o, Brain const & i );


#endif /* *********************************************************** BRAIN_H */