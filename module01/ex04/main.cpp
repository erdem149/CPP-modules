/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:12:53 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/08 12:12:58 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
int main(int count, char **str)
{
	if(count == 4)
	{
		file file_tmp(str);
		file_tmp.file_copy();
	}
	else
		std::cout << "Used: <filename> <to_file> <replace>" << std::endl;
}
