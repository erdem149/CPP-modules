#include "../lib/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Wrong Animal") {
	std::cout << "WrongAnimal class's constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	std::cout << "WrongAnimal class's copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal class's operator= called" << std::endl;
	if (this == &src)
		return (*this);
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal class's constructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal sound !" << std::endl;
}
