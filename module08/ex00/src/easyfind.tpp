#ifndef EASYFIND_TPP
# define EASYFIND_TPP
# include "../lib/easyfind.hpp"

template <typename T>
void easyfind(T &container, int value)
{
	if(std::find(container.begin(), container.end(), value) != container.end())
		std::cout << GREEN "Value: " << value << " --> ✓ Found" END << std::endl;
	else
		std::cout << RED "Value: " << value << " --> X Not Found!" END << std::endl;
}
#endif
