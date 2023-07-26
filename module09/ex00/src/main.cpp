#include "../lib/BitcoinExchange.hpp"

int main(int index, char **str)
{
	try
	{
		Bitcoin::checkArg(index, str);
		Bitcoin::setContainer();
		Bitcoin::printInputExchange();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

