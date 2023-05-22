#include "../lib/aanimal.hpp"
#include "../lib/dog.hpp"
#include "../lib/cat.hpp"
#include "../lib/WrongAnimal.hpp"
#include "../lib/WrongCat.hpp"
int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	WrongAnimal* a = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	a->makeSound();
	delete j;
	delete i;
	delete a;
}
