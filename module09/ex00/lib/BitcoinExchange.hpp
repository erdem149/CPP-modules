#ifndef BITCOINEXCHANGE_HPP
 #define BITCOINEXCHANGE_HPP
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
# include <map>
# include <fstream>
# include <sstream>
# include <climits>
# include <algorithm>

class Bitcoin
{

private:
	static std::string						_input;
	static std::string						_inputFirstLine;
	static std::string						_data;
	static std::string						_dataFormat;
	static std::string						_dataFirstLine;
	static std::string						_delimiterPosData;
	static std::string						_delimiterPosInput;
	static std::map<std::string, double>	_arr;

public:
	static void			checkArg( int index, char **str );
	static void			checkFile( std::string file_name);
	static void			setContainer(void);
	static void			printInputExchange( void );
	class NotEnoughtInputs : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: not enought inputs!	###" END );
			}
	};

	class TooLargeNumber : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "Error: too large a number." END );
			}
	};

	class FileDoesNotExist : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "###	Error: file doesn't exist!	###" END );
			}
	};

	class EnteredValuesAreIncorrect : public std::exception
	{
		public:
			virtual const char *what(void) const throw()
			{
				return ( RED "Error: Input File Entered Values Are Incorrect." END );
			}
	};


};
#endif
