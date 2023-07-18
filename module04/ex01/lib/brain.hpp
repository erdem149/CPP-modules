#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
	std::string brain_array[100];
public:
	//Default constructor
	Brain();
	//Default destructor
	~Brain();
	//copy
	Brain& operator=(const Brain& src);
    //Default copy constructor
	Brain(const Brain &copy);
};

#endif
