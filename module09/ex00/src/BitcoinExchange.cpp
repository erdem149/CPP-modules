#include "../lib/BitcoinExchange.hpp"

std::string						Bitcoin::_input = "";
std::map<std::string, double>	Bitcoin::_arr;

void	Bitcoin::checkArg(int index, char **str)
{
	if(index > 2)
		throw(NotEnoughtInputs());
	else if(index < 2)
		throw(TooLargeNumber());
	Bitcoin::checkFile(str[1]);
}

void Bitcoin::checkFile(std::string file_name)
{
	std::ifstream read;

	read.open(file_name.c_str());
	if(!read.is_open())
	{
		throw(FileDoesNotExist());
	}
	read.close();
	_input=file_name;
}

void Bitcoin::setContainer(void)
{
	std::ifstream file(_input.c_str());
	std::string line;
	std::string date;
	std::string tmp_btc_value;
	double btc_value;
	size_t delimiterPos;

	getline(file,line);
	while(getline(file, line))
	{
		delimiterPos = line.find("|");
		if(delimiterPos == std::string::npos)
			throw(EnteredValuesAreIncorrect());
		date = line.substr(0,delimiterPos);
		delimiterPos = date.find(" ");
		if(delimiterPos == std::string::npos)
			throw(EnteredValuesAreIncorrect());
		date = date.substr(0,delimiterPos);
		delimiterPos = line.find("|");
		if(delimiterPos == std::string::npos)
			throw(EnteredValuesAreIncorrect());
		tmp_btc_value = line.substr(delimiterPos, line.length());
		delimiterPos = tmp_btc_value.find(" ") + 1;
		if(delimiterPos == std::string::npos)
			throw(EnteredValuesAreIncorrect());
		tmp_btc_value = tmp_btc_value.substr(delimiterPos, tmp_btc_value.length());
		btc_value = std::strtod(tmp_btc_value.c_str(), NULL);
		_arr[date] = btc_value;
	}
	file.close();
}

void		Bitcoin::printInputExchange( void )
{

}
