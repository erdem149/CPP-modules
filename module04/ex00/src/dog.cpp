#include "../lib/dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "Copy[Dog] default Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{

	this->type = src.getType();
	std::cout << "Copy[Dog] default Assignment operator" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "🐶 HAW ! HAW ! 🐶" << std::endl;
}
