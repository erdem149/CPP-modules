/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:23:14 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/04/05 14:23:15 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
class Animal
{
protected:
    std::string type;
public:
    //Default constructor
    Animal();
    //Default destructor
    virtual ~Animal();
    //Default copy constructor
	Animal& operator=(const Animal& src);
    //copy
    Animal(const Animal &copy);
    //set
    void setType(const std::string &type);
    //get
    std::string getType() const;
    //sound
    virtual void makeSound() const;
};

#endif
