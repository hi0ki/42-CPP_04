#ifndef ANIMAL_HPP
	#define ANIMAL_HPP

	#include <iostream>

	class Animal
	{
		protected:
			std::string type;
		public:
			Animal();
			Animal(std::string type);
			Animal(Animal &obj);
			Animal &operator=(Animal &obj);
			virtual void makeSound() const;
			virtual std::string getType() const;
			~Animal();
	};
#endif