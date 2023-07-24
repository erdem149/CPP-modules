/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:09:24 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 14:09:24 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Serializer.hpp"

int	main()
{
	Data *data = new Data();
	data->x = 42;
	data->y = 42.42f;

	//unsigned long ptrVal = (unsigned long)data; // Bu kullanım yerine reinterpret_cast kullanmak daha efektiftir. Kod bloğu genişlediğinde tip dönüşümlerinin kontrolü daha kolay yapılır.  (örn ctrl + F ile reinterpret_cast'i aratmak)
	long ptrVal = reinterpret_cast<long>(data);
	std::cout << "Different Use: " << ptrVal << std::endl;

	//Data *pointer = (Data* )ptrVal; // Bu kullanım yerine reinterpret_cast kullanmak daha efektiftir. Kod bloğu genişlediğinde tip dönüşümlerinin kontrolü daha kolay yapılır. (örn ctrl + F ile reinterpret_cast'i aratmak)
	Data *pointer = reinterpret_cast<Data*>(ptrVal);
	std::cout << "Different Use: " << pointer->x << ", " << pointer->y << std::endl;
	//reinterpret_cast<Data*>(pointer)->x

	if (data == pointer)
		std::cout << ".." << std::endl;
	else
		std::cout << "--" << std::endl;

	// Serialize
	uintptr_t raw = Serializer::sarialize( data );
	std::cout << "Serialized Value: " << raw << std::endl;

	// Deserialize
	Data *ptr = Serializer::desarialize( raw );
	std::cout << "Deserialize Value: {" << ptr->x << ", " << ptr->y << "}" << std::endl;

	// Verify that deserialized pointer is equal to original pointer
	if ( ptr == data )
		std::cout << "Deserialized pointer is equal to original pointer." << std::endl;
	else
		std::cout << "Deserialized pointer is NOT equal to original pointer." << std::endl;

	delete data;

	std::string b = "erdem";
	unsigned long a = reinterpret_cast<unsigned long>(&b);
	std::cout << a;
	char *c = reinterpret_cast<char*>(a);
	std::cout << "\n" << c;

	char *d = reinterpret_cast<char*>(&b);
	std::cout << "\n" << d;

	return (0);
}
