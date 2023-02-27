
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <iomanip>
# include <stdlib.h>

class contact
{
	private:
		std::string	name;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	dSecret;
		int			index;
		std::string input(std::string message) const;
		std::string charlimited(std::string str) const;
	public:
		void assigment(int index);
		void getcontactinfo(void) const;
		void getuserinfo(void) const;
		int getvaluechack(void) const;
};

class phoneBook
{
	private:
		contact user[8];
	public:
		void add(void);
		void search(void) const;
};

#endif
