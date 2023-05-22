#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class AMateria
{
protected:

public:
	AMateria(std::string const & type);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
