#include <iostream>

#define MEHDI

#ifdef MEHDI \
	std::cout << "Mehdi is defined" << std::endl; 
#endif
int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}