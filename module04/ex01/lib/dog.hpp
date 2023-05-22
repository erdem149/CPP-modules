#ifndef DOG_HPP
# define DOG_HPP
# include "animal.hpp"
# include "brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;
public:
	//Default constructor
	Dog();
	//Default destructor
	~Dog();
	//copy
	Dog(const Dog &copy);
	//Default copy constructor
	Dog& operator=(const Dog& src);
	//sound
    void makeSound() const;
};
#endif
