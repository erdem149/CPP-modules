#include "../lib/animal.hpp"
#include "../lib/dog.hpp"
#include "../lib/cat.hpp"
#include "../lib/brain.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}
