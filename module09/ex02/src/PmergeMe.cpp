#include "../lib/PmergeMe.hpp"

std::list<int>		PmergeMe::_list;
std::vector<int>	PmergeMe::_vector;
int					PmergeMe::_insertSortingLimit = 100;

void	PmergeMe::checkArg( int argc, char **argv )
{
	if ( argc < 2 )
		throw PmergeMe::NotEnoughtInputs();

	for ( int i = 0; i < argc; i++ )
	{
		std::string str = argv[i];
		for (int k = 0; k < (int)str.length() ; k++)
		{
			if ( !std::isdigit(str[k]) )
				throw PmergeMe::WrongInputs();
		}
	}
}

void PmergeMe::setContainers(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		PmergeMe::_list.push_back(std::atoi(argv[i]));
		PmergeMe::_vector.push_back(std::atoi(argv[i]));
	}
}

void PmergeMe::sortListContainer()
{
	clock_t start, end;
	double time;

	start = clock();
	ListMergeInsertSorting(_list);
	end = clock();
	time = PmergeMe::measureTime(start, end);

}

void PmergeMe::ListMergeInsertSorting(std::list<int> &_list)
{
	std::list<int> left;
	std::list<int> right;

	if (_list.size() <= 100)
		ListInsertSorting(_list);
	else
	{
		std::list<int>::iterator it = _list.begin();
		for (int i = 0; i < (int)_list.size() / 2; i++)
		{
			left.push_back(*it);
			it++;
		}
		for (int i = (int)_list.size() / 2; i < (int)_list.size(); i++)
		{
			right.push_back(*it);
			it++;
		}
	}
	ListMergeInsertSorting(left);
	ListMergeInsertSorting(right);
	ListMergeSorting(_list, left, right); // burada bitiyor program // son buluyor // KIYAMET KOPUYOR
}
