/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:31:14 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/08 12:31:15 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

file::file(char **str): file_name(str[1]), file_search_word(str[2]), file_replace_word(str[3])
{
	this->read.open(this->file_name);
	if(!this->read.is_open())
	{
		std::cerr << this->file_name << " file does not open" << std::endl;
		return;
	}
	this->write.open(this->file_name + "replace");
	if(!this->write.is_open())
	{
		std::cerr << this->file_name <<" dosya açılmıyor veya oluşturulamadı" << std::endl;
		return;
	}
}

void file::file_replace()
{
	int i = 0;
	int length_search_word = this->file_search_word.length();
	while (this->readline[i])
	{
		if (!this->readline.compare(i, length_search_word, this->file_search_word))
		{
			this->write << this->file_replace_word;
			i += length_search_word;
		}
		else
		{
			this->write << this->readline[i];
			i++;
		}
	}
}

void file::file_copy(void)
{
	while (std::getline(this->read, this->readline))
	{
		this->file_replace();
		this->write << std::endl;
	}
}

