#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

void ll()
{
	system("leaks -q program");
}

int main()
{
	atexit(ll);
	Cure *cure = new Cure();
	Ice *ice = new Ice();
	Character character("Character");

	std::cout << "-----------------------------------------------\n";
	character.equip(ice);
	character.equip(cure);

	character.use(0, character);
	std::cout << "-----------------------------------------------\n";
	delete cure;
	delete ice;
	// character.use(0, character);
	// character.use(1, character);
	return 0;
}