#include "../lib/cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &copy):AAnimal(copy)
{
	*this = copy;
	std::cout << "Copy[Cat] default Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	this->type = src.getType();
	this->_brain = new Brain( *src._brain );
	std::cout<< "Copy[Cat] default Assignment operator" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "😸 MEOWW 😸" << std::endl;
}
