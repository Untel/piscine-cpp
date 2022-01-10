#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

# define FACTORY_COUNT 3
typedef Form* 		(*f) (std::string const &target);
typedef struct		s_keyform {
	std::string 	key;
	f				factory;
}					t_keyform;

class Intern
{
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form 			*makeForm	(std::string const key, std::string const target);

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */