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

class AAnimal
{
protected:
    std::string type;
public:
    //Default constructor
    AAnimal();
    //Default destructor
    virtual ~AAnimal();
    //Default copy constructor
	AAnimal& operator=(const AAnimal& src);
    //copy
    AAnimal(const AAnimal &copy);
    //set
    void setType(const std::string &type);
    //get
    std::string getType() const;
    //sound
    virtual void makeSound(void) const = 0;
};

#endif
