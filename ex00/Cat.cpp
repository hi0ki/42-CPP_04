#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat type constructor called" << std::endl;
}

Cat::Cat(Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}
Cat &Cat::operator=(Cat &obj)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = obj.type;
	return *this;
}


Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meeeeoooow Meeeeooooow" << std::endl;
}

std::string Cat::getType() const
{
	return type;
}