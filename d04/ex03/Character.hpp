#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# define MAX_INVENTORY_SIZE 4

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria *		_inventory[MAX_INVENTORY_SIZE];
		void			_clearMaterias(void);

	public:
		Character(std::string name);
		Character(Character const &src);
		virtual ~Character();

		Character &						operator = (Character const &rhs);
		virtual std::string const &		getName() const;
		virtual void 					equip(AMateria* m);
		virtual void 					unequip(int idx);
		virtual void 					use(int idx, ICharacter& target);
};

std::ostream &			operator << (std::ostream &o, Character const &i);

#endif /* ******************************************************* CHARACTER_H */