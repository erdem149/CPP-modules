#include "../lib/WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "Wrong Cat";
	std::cout << "WrongCat class's constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) {
	std::cout << "WrongCat class's copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	std::cout << "WrongCat class's operator= called" << std::endl;
	WrongAnimal::operator=(src);
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat class's constructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "🙀 MEOWWWWWW 🙀" << std::endl;
}
