#include "phonebook.hpp"

void phoneBook::add(void)
{
	static int usercount;
	if(usercount == 8)
		usercount = 0;
	this->user[usercount].assigment(usercount);
	usercount++;
}

void phoneBook::search(void) const
{
	int index_count;
	std::string inputindex;
	std::cout << "************* PHONE BOOK ***************\n";
	if(this->user[0].getvaluechack())
	{
		std::cout << "your phone book is empty :) \n";
		return;
	}
	for(int i=0 ; i < 8 ; i++)
		this->user[i].getcontactinfo();
	do
	{
		std::cout << "Enter index num: ";
		std::getline(std::cin, inputindex);
		if(inputindex.empty() || inputindex.length() != 1)
		{
			std::cout << "You must be enter between 0-7 value! \n";
			inputindex.clear();
			continue;
		}
		index_count = atoi(inputindex.c_str());
	}while(inputindex.empty());
	this->user[index_count].getuserinfo();
}
