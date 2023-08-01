#ifndef RPN_HPP
 #define RPN_HPP
/*-----------color------------------*/
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define WHITE		"\033[0;37m"
# define END		"\033[m"
# define RESET		"\033[0m"
/*----------------------------------*/

# include <iostream>
# include <algorithm>
# include <stack>
# include <sstream>
# include <string.h>

class RPN{

private:
	static std::string					_input;
	static std::string					_allowedChars;
	static std::string					_allowedOperators;
	static std::stack<int>				_arr;

public:

	static void						checkArg( int argc, char **argv );
	static void						checkvalue(void);
	static void						setContesetContainer(void);
	static void						printRPN(void);
	class NotEnoughtInputs : public std::exception{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: not enought inputs!	###" END );
			}
	};

	class TooManyInputs : public std::exception{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: too many inputs!		###" END );
			}
	};

	class ContainsUnwantedChars : public std::exception{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: input contains disallowed characters!	###" END );
			}
	};

	class WrongInputs : public std::exception{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: wrong inputs!	###" END );
			}
	};
};

#endif
