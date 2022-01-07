#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name) :
	_name(name)
{
	#ifdef DEBUG
		std::cout << "<Character> Constructor" << std::endl;
	#endif // DEBUG
}

Character::Character(const Character &src)
{
	#ifdef DEBUG
		std::cout << "<Character> Copy Constructor" << std::endl;
	#endif // DEBUG
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	#ifdef DEBUG
		std::cout << "<Character> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &
	Character::operator = (Character const &rhs)
{
	#ifdef DEBUG
		std::cout << "<Character> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	//this->_inventory = NULL;
	return (*this);
}

std::ostream &
	operator << (std::ostream &o, Character const &i)
{
	o << "<Character> " << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void
	Character::equip(AMateria* m)
{
	if (!m) {
		#ifdef DEBUG
			std::cout << "<Character> trying to equip an empty materia" << std::endl;
		#endif // DEBUG
		return ;
	}
	for (int i = 0; i < MAX_INVENTORY_SIZE; i++) {
		if (this->_inventory[i] == NULL) {
			#ifdef DEBUG
				std::cout << "<Character> Equip materia " << m->getType() << " at index " << i << std::endl;
			#endif // DEBUG
			this->_inventory[i] = m;
			return ;
		}
	}
	#ifdef DEBUG
		std::cout << "<Character> equip materia " << m->getType() << " failed" << std::endl;
	#endif // DEBUG
	return ;
}
void
	Character::unequip(int idx)
{
	if (idx < MAX_INVENTORY_SIZE && this->_inventory[idx]) {
		#ifdef DEBUG
			std::cout << "<Character> Unequip materia " << this->_inventory[idx]->getType() << " from index " << idx << std::endl;
		#endif // DEBUG
		this->_inventory[idx] = NULL;
		return ;
	}
	#ifdef DEBUG
		std::cout << "<Character> unequip materia at " << idx << " failed" << std::endl;
	#endif // DEBUG
}
void
	Character::use(int idx, ICharacter& target)
{
	if (idx < MAX_INVENTORY_SIZE && this->_inventory[idx]) {
		#ifdef DEBUG
			std::cout << "<Character> use materia " << this->_inventory[idx]->getType() << " from index " << idx << std::endl;
		#endif // DEBUG
		this->_inventory[idx]->use(target);
		return ;
	}
	#ifdef DEBUG
		std::cout << "<Character> use materia at index " << idx << " failed" << std::endl;
	#endif // DEBUG
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &
	Character::getName() const
{
	return this->_name;
}

/* ************************************************************************** */