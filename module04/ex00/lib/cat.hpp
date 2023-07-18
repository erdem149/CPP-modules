#ifndef CAT_HPP
# define CAT_HPP
# include "animal.hpp"

class Cat:public Animal
{
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
