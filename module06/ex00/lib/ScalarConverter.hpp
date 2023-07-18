/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:48:46 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/05 12:48:47 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# define ERROR 404
# define WRITE 101
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <limits>
enum v_type
{
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    LITERALS
};

class ScalarConverter
{
private:
    char    _c;
    int     _n;
    float   _f;
    double  _d;
public:
    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &src);
    ~ScalarConverter(void);
    ScalarConverter& operator=(const ScalarConverter &rsh);
    void print_variable(int status, std::string str);
    void print_literals(std::string str);
    void Converter_str(std::string str);
    int get_type(std::string str);
    int is_float(std::string str);
    int is_double(std::string str);
    int is_int(std::string str);
    int is_char(std::string str);
    int is_literals(std::string str);

    class Error_ex: public std::exception
	{
		virtual const char* what() const throw();
	};
};






#endif
