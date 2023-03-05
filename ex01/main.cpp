#include "phonebook.hpp"

int main(void)
{
	phoneBook book;
	std::string input;
	book.user_count = 0;
	do
	{
		std::cout << "available commands: ADD , SEARCH , EXIT \n";
		std::cout << "command line >> ";
		std::getline(std::cin, input);
		if(!input.compare("ADD"))
			book.add();
		if(!input.compare("SEARCH"))
			book.search();
	}while(input.compare("EXIT"));
}
