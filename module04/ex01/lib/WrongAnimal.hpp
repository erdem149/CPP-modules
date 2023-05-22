#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &cpy);
	WrongAnimal &operator=(const WrongAnimal &src);
	void makeSound(void) const;
	virtual ~WrongAnimal();
};

#endif
