#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignation operator called" << std::endl;
	type = obj.type;
	return *this;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wooooooow Wooooooow" << std::endl;
}

std::string Dog::getType() const
{
	return type;
}