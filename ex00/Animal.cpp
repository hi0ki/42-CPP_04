#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
}
Animal::Animal(Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(Animal &obj)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = obj.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}