#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# define MAX_TEMPLATE_SIZE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *			_templates[MAX_TEMPLATE_SIZE];
        void 				_clearTemplates(void);

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();

		MateriaSource &		operator = (MateriaSource const &rhs);

        void 				learnMateria(AMateria *m);
        AMateria *			createMateria(std::string const &type);
};

std::ostream &				operator << (std::ostream &o, MateriaSource const &i);

#endif /* *************************************************** MATERIASOURCE_H */