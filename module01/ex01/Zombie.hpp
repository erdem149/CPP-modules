#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
    	~Zombie();
		void setname(std::string name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
