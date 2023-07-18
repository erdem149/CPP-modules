/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:49:07 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/05 12:49:07 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
    this->_c = '\0';
    this->_n = 0;
    this->_f = 0.0f;
    this->_d = 0.0;
}

ScalarConverter::ScalarConverter( const ScalarConverter& src )
{
    *this = src;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& rhs )
{
    if ( this != &rhs ) {
        this->_n = rhs._n;
        this->_f = rhs._f;
        this->_c = rhs._c;
    }
    return *this;
}

void ScalarConverter::Converter_str(std::string str)
{
    int status = get_type(str);
    if(status == ERROR)
        throw( ScalarConverter::Error_ex());
    print_variable(status, str);
}

int		ScalarConverter::is_literals(std::string str)
{
	if ( (str.compare("nan") == 0)
		|| (str.compare("nanf") == 0)
		|| (str.compare("+inff") == 0) // Float
		|| (str.compare("inff") == 0) // Float
		|| (str.compare("-inff") == 0) // Float
		|| (str.compare("+inf") == 0) // Double
		|| (str.compare("inf") == 0) // Double
		|| (str.compare("-inf") == 0)) // Double
		return (true);
	return (false);
}

int ScalarConverter::get_type(std::string str)
{
	if(is_float(str))
		return(FLOAT);
	else if(is_double(str))
		return(DOUBLE);
	else if(is_int(str))
		return(INT);
	else if(is_char(str))
		return(CHAR);
    else if(is_literals(str))
        return(LITERALS);
	else
		return(ERROR);
}

int ScalarConverter::is_float(std::string str)
{
	 if ( str.find( '.' ) == std::string::npos || str[str.length()-1] != 'f'
        || str.find( '.' ) == 0 || str.find( '.' ) == str.length() - 2 )
        return (0);
    int found = 0;
    int j = 0;
    if ( str[j] == '-' || str[j] == '+' )
        j++;
    for ( int i=j; i < ( int )str.length() - 1; i++ ) {
        if ( str[i] == '.' )
            found++;
        if ( ( !std::isdigit( str[i] ) && str[i] != '.' ) || found > 1 )
            return (0);
    }

    return (1);
}

int ScalarConverter::is_double(std::string str)
{
    if ( str.find( '.' ) == std::string::npos || str.find( '.' ) == 0
        || str.find( '.' ) == str.length() - 1 )
        return false;
    int j = 0;
    int found = 0;
    if ( str[j] == '-' || str[j] == '+' )
        j++;
    for ( int i=j; i < ( int ) str.length(); i++ ) {
        if ( str[i] == '.' )
            found++;
        if ( ( !std::isdigit( str[i] ) && str[i] != '.' ) || found > 1 )
            return (0);
    }

    return (1);
}

int ScalarConverter::is_int(std::string str)
{
	int    j = 0;
    if ( str[j] == '-' || str[j] == '+' )
        j++;
    for ( int i = j; i < (int)str.length(); i++)
    {
        if ( !std::isdigit( str[i] ) )
            return (0);
    }
    return (1);
}

int ScalarConverter::is_char(std::string str)
{
	 return (str.length() == 1 && std::isalpha( str[0] ) && std::isprint( str[0] ));
}

void ScalarConverter::print_variable(int status, std::string str)
{
    switch(status)
    {
        case CHAR:
             _c = str.c_str()[0];
            _n = static_cast<int>(_c);
            _f = static_cast<float>(_c);
            _d = static_cast<double>(_c);
            print_variable(WRITE, str);
            break;
        case FLOAT:
            _f = std::atof(str.c_str());
            _c = static_cast<char>(_f);
            _n = static_cast<int>(_f);
            _d = static_cast<double>(_f);
            print_variable(WRITE, str);
            break;
        case DOUBLE:
            _d = std::strtod(str.c_str(), NULL);
            _c = static_cast<char>(_d);
            _n = static_cast<int>(_d);
            _f = static_cast<float>(_d);
            print_variable(WRITE, str);
            break;
        case INT:
            _n = std::atoi(str.c_str());
            _c = static_cast<char>(_n);
            _d = static_cast<double>(_n);
            _f = static_cast<float>(_n);
            print_variable(WRITE, str);
            break;
        case LITERALS:
            print_literals(str);
            break;
        case WRITE:
            std::cout <<"char: ";
            if(std::isprint(_c))
                std::cout <<_c<<std::endl;
            else if(_c >= 0 && _c < 127)
                std::cout <<"Non displayable"<<std::endl;
            else
                std::cout <<"impossible"<<std::endl;
            std::cout <<"int: "<< _n<< std::endl;
            std::cout <<"float: "<< _f<< std::endl;
            std::cout <<"double: "<< _d<< std::endl;
    }
}

void ScalarConverter::print_literals(std::string str)
{
    std::cout <<"char: impossible"<<std::endl;
    std::cout <<"int: impossible"<< std::endl;
    if(str.c_str()[0] == '-')
    {
        std::cout <<"float: -inff"<<std::endl;
        std::cout <<"double: -inf"<< std::endl;
    }
    else if(str.c_str()[0] == '+')
    {
        std::cout <<"float: +inff"<<std::endl;
        std::cout <<"double: +inf"<< std::endl;
    }
    else if(!str.compare("nan") || !str.compare("nanf"))
    {
        std::cout <<"float: nanf"<<std::endl;
        std::cout <<"double: nan"<< std::endl;
    }
    else
    {
        std::cout <<"float: 0.0f"<<std::endl;
        std::cout <<"double: 0.0"<< std::endl;
    }
}
const char* ScalarConverter::Error_ex::what() const throw()
{
	return ("!!!!!!Error!!!!!!!");
}
