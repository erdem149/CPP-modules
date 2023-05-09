#include "../lib/cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "Copy[Cat] default Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	this->type = src.getType();
	std::cout<< "Copy[Cat] default Assignment operator" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "😸 MEOWW 😸" << std::endl;
}
