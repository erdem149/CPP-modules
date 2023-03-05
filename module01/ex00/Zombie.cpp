#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name=name;
}

Zombie::~Zombie(void)
{
	std::cout<<this->name<<" Zombie has been destroyed\n";
}

void Zombie::announce( void )
{
	std::cout<<this->name<< ": BraiiiiiiinnnzzzZ...\n";
}
