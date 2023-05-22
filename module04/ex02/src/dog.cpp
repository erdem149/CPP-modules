#include "../lib/dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &copy):AAnimal(copy)
{
	*this = copy;
	std::cout << "Copy[Dog] default Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	this->type = src.getType();
	this->_brain = new Brain( *src._brain );
	std::cout << "Copy[Dog] default Assignment operator" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "🐶 HAW ! HAW ! 🐶" << std::endl;
}
