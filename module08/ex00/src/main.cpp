#include "../lib/easyfind.hpp"
int main(){

	{
		std::cout << RED "---------------- for vector example ----------------" END << std::endl;

		std::vector<int> intVec;

		intVec.push_back(10);
		intVec.push_back(20);
		intVec.push_back(30);

		easyfind(intVec, 30);
		easyfind(intVec, 50);

		std::vector<double> doubleVec;

		doubleVec.push_back(5);
		doubleVec.push_back(7);
		doubleVec.push_back(8.42);

		easyfind(doubleVec, 7);
		easyfind(doubleVec, 8);

		std::vector<std::string> stringVec;
		stringVec.push_back("Jack");
		stringVec.push_back("Carl");
		stringVec.push_back("Alice");
		stringVec.push_back("Emanuel");
	}

	{
		std::cout << RED "---------------- for list example ----------------" END << std::endl;

		std::list<int> intList;

		intList.push_back(3);
		intList.push_back(6);
		intList.push_back(9);

		easyfind(intList, 6);
	}

	{
		std::cout << RED "---------------- for deque example ----------------" END << std::endl;

		std::deque<int> intDeque;

		intDeque.push_front(4);
		intDeque.push_front(8);
		intDeque.push_front(12);

		easyfind(intDeque, 8);

	}
}
