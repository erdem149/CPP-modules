/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Array.tpp                                          :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2023/07/19 15:45:55 by eryilmaz          #+#    #+#              */
/*    Updated: 2023/07/19 15:45:56 by eryilmaz         ###   ########.tr	    */
/*                                                                              */
/* **************************************************************************** */

#ifndef ARRAY_TPP
  #define ARRAY_TPP

template< typename T >
Array<T>::Array( void ) : _array(NULL), _size(0){
	std::cout << "Default Constructor Called" << std::endl;
}

template< typename T >
Array<T>::Array( unsigned int n ) : _array(new T[n]), _size(n){
	std::cout << "Constructor Called" << std::endl;
}

template< typename T >
Array<T>::Array( const Array &ref ) : _array(new T[ref._size]), _size(ref._size){
	std::cout << "Copy Constructor Called" << std::endl;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = ref._array[i];
}

template< typename T >
Array<T>::Array( const T* elements, unsigned int size) : _array(new T[size]), _size(size){
	std::cout << "Array[] Constructor Called" << std::endl;
	for (unsigned int i = 0; i < size; i++)
		_array[i] = elements[i];
}

template< typename T >
Array<T>::~Array( void ){
	std::cout << "Destructor Called" << std::endl;
	delete[] _array;
}

template< typename T >
Array<T> &Array<T>::operator=( const Array &ref ){
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &ref)
	{
		delete[] this->_array;
		this->_array = new T[ref._size];
		this->_size = ref._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = ref._array[i];
	}
	return (*this);
}

template< typename T >
T &Array<T>::operator[]( unsigned int i ) const{
	if (i >= this->_size)
		throw ( OutOfBoundsException() );
	return (this->_array[i]);
}

template< typename T >
unsigned int Array<T>::getSize( void ){
	return (this->_size);
}

template< typename T >
const char *Array<T>::OutOfBoundsException::what() const throw(){
	return ( "Index is out of bounds!" );
}

template< typename T >
std::ostream &operator<<( std::ostream &os, Array<T> &obj ){
	os << "[ ";
	for (unsigned int i = 0; i < obj.getSize(); i++)
	{
		// if (obj[i]) // const char * ise bu kısım açık olmalı
			os << obj[i] << " ";
	}
	os << "]";
	os << std::endl;
	return ( os );
}

#endif
