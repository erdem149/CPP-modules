#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombi = new Zombie[N];
	for(int i=0; i<N; i++)
	{
		zombi[i].setname(name);
	}
	return zombi;
}
