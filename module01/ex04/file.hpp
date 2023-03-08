/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:31:06 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/08 12:31:08 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class file
{
private:
	std::ifstream read;
	std::ofstream write;
	std::string readline;
	std::string file_name;
	std::string file_search_word;
	std::string file_replace_word;
public:
	file(char **str);
	std::string file_replace(void);
	void file_copy(void);
};
