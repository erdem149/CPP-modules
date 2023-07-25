#include "../lib/Span.hpp"

int main( void ){

	{
		std::cout << RED "---------------- Subject default test ----------------" END << std::endl;

		Span sp = Span(5);

		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(6);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << RED "List: \n" END << sp << std::endl;
		std::cout << "Max:		" << sp.getMax() << std::endl;
		std::cout << "Min:		" << sp.getMin() << std::endl;
		std::cout << "List Size:	" << sp.getSize() << std::endl;
		std::cout << GREEN"Shortest Value:	" << sp.shortestSpan() << END << std::endl;
		std::cout << GREEN"Longest Value:	" << sp.longestSpan() << END << std::endl;
	}

	{
		std::cout << RED "---------------- 10k numbers test ----------------" END << std::endl;

		Span tab(10000);
		srand(time(NULL));
		for (unsigned int i = 0; i < 10000; i++)
			tab.addNumber(rand());

		std::cout << RED "List: \n" END << "-> list is too big so i can't print <-" << std::endl;//tab << std::endl;
		std::cout << "Max:		" << tab.getMax() << std::endl;
		std::cout << "Min:		" << tab.getMin() << std::endl;
		std::cout << "List Size:	" << tab.getSize() << std::endl;
		std::cout << GREEN"Shortest Value:	" << tab.shortestSpan() << END << std::endl;
		std::cout << GREEN"Longest Value:	" << tab.longestSpan() << END << std::endl;
	}

	{
		std::cout << RED "---------------- Way to add numbers that's more practical ----------------" END << std::endl;
		Span tab(30001);
		std::list<int> list(30000);

		std::srand(time(NULL));
		std::generate(list.begin(), list.end(), std::rand);
		tab.addNumber(list.begin(), list.end());
		tab.addNumber(99);

		std::cout << RED "List: \n" END << "-> list is too big so i can't print <-" << std::endl;//tab << std::endl;
		std::cout << "Max:		" << tab.getMax() << std::endl;
		std::cout << "Min:		" << tab.getMin() << std::endl;
		std::cout << "List Size:	" << tab.getSize() << std::endl;
		std::cout << "List Size:	" << list.size() << std::endl;
		std::cout << GREEN"Shortest Value:	" << tab.shortestSpan() << END << std::endl;
		std::cout << GREEN"Longest Value:	" << tab.longestSpan() << END << std::endl;
	}

	{
		std::cout << RED "---------------- Copy tests ----------------" END << std::endl;
		Span tab(20);
		std::list<int> list(10);

		std::srand(time(NULL));
		std::generate(list.begin(), list.end(), std::rand);
		tab.addNumber(list.begin(), list.end());

		Span tab2(tab);

		tab.addNumber(99);
		tab.addNumber(98);
		tab.addNumber(97);
		tab.addNumber(96);

		std::cout << RED "List: \n" END << tab2 << std::endl;
		std::cout << "Max:		" << tab2.getMax() << std::endl;
		std::cout << "Min:		" << tab2.getMin() << std::endl;
		std::cout << "List Size:	" << tab2.getSize() << std::endl;
		std::cout << "List Size:	" << list.size() << std::endl;
		std::cout << GREEN"Shortest Value:	" << tab2.shortestSpan() << END << std::endl;
		std::cout << GREEN"Longest Value:	" << tab2.longestSpan() << END << std::endl;

		std::cout << RED "\nList: \n" END << tab << std::endl;
		std::cout << "Max:		" << tab.getMax() << std::endl;
		std::cout << "Min:		" << tab.getMin() << std::endl;
		std::cout << "List Size:	" << tab.getSize() << std::endl;
		std::cout << "List Size:	" << list.size() << std::endl;
		std::cout << GREEN"Shortest Value:	" << tab.shortestSpan() << END << std::endl;
		std::cout << GREEN"Longest Value:	" << tab.longestSpan() << END << std::endl;
	}
	return (0);
}
