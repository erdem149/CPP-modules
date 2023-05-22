#ifndef CAT_HPP
# define CAT_HPP
# include "animal.hpp"
# include "brain.hpp"

class Cat:public Animal
{
private:
	Brain *_brain;

public:
	//Default constructor
	Cat();
	//Default destructor
	~Cat();
    //Default copy constructor
	Cat& operator=(const Cat& src);
	//copy
	Cat(const Cat &copy);
	//sound
	void makeSound() const;
};
#endif
