#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	#ifdef DEBUG
		std::cout << "<MateriaSource> Constructor" << std::endl;
	#endif // DEBUG
	for (int i = 0; i < MAX_TEMPLATE_SIZE; i++)
		this->_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	#ifdef DEBUG
		std::cout << "<MateriaSource> Copy Constructor" << std::endl;
	#endif // DEBUG
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	#ifdef DEBUG
		std::cout << "<MateriaSource> Destructor" << std::endl;
	#endif // DEBUG
	this->_clearTemplates();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &
	MateriaSource::operator = (MateriaSource const &rhs)
{
	#ifdef DEBUG
		std::cout << "<MateriaSource> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	this->_clearTemplates();
	for (int i = 0; i < MAX_TEMPLATE_SIZE; i++) {
		if (rhs._templates[i] != NULL) {
			#ifdef DEBUG
				std::cout << "<MateriaSource> Assignation copy materia " << i << std::endl;
			#endif // DEBUG
			this->_templates[i] = rhs._templates[i]->clone();
		}
	}
	return (*this);
}

std::ostream &
	operator << (std::ostream &o, MateriaSource const &i)
{
	o << "<MateriaSource> " << &i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void
	MateriaSource::_clearTemplates(void)
{
	for (int i = 0; i < MAX_TEMPLATE_SIZE; i++) {
		if (this->_templates[i] != NULL) {
			#ifdef DEBUG
				std::cout << "<MateriaSource> Freeing materia " << this->_templates[i]->getType() << " at index " << i << std::endl;
			#endif // DEBUG
			delete this->_templates[i];
			this->_templates[i] = NULL;
		}
	}
}


void
	MateriaSource::learnMateria(AMateria *m)
{
	if (!m) {
		#ifdef DEBUG
			std::cout << "<MateriaSource> Trying to learn an empty materia" << std::endl;
		#endif // DEBUG
		return ;
	}
	for (int i = 0; i < MAX_TEMPLATE_SIZE; i++) {
		if (this->_templates[i] == NULL) {
			#ifdef DEBUG
				std::cout << "<MateriaSource> Learning materia " << m->getType() << " at index " << i << std::endl;
			#endif // DEBUG
			this->_templates[i] = m;
			return ;
		}
	}
	#ifdef DEBUG
		std::cout << "<MateriaSource> Learning materia " << m->getType() << " failed" << std::endl;
	#endif // DEBUG
	return ;
	
}
AMateria *
	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX_TEMPLATE_SIZE; i++) {
		if (this->_templates[i] && this->_templates[i]->getType() == type) {
			#ifdef DEBUG
				std::cout << "<MateriaSource> Found templated materia " << this->_templates[i]->getType() << " from index " << i << std::endl;
			#endif // DEBUG
			return this->_templates[i]->clone();
		}
	}
	#ifdef DEBUG
		std::cout << "<MateriaSource> No materia found for creation" << std::endl;
	#endif // DEBUG
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */