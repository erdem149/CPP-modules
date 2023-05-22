#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string _type);
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &src);
	void makeSound(void) const;
	~WrongCat();
};

#endif
