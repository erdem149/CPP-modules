/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:44:00 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/21 13:44:00 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point(): x(0), y(0) {
}

Point::Point(Fixed _x, Fixed _y): x(_x), y(_y) {
}

Point::~Point() {
}

Point::Point(const Point &cpy): x(cpy.getX()), y(cpy.getY()) {
	//std::cout << "cpy" << std::endl;
}

Point	&Point::operator=(const Point &src) {
	if (this == &src)
		return *this;
	return *this;
}


Fixed	const Point::getX() const {
	return (this->x);
}

Fixed	const Point::getY() const {
	return (this->y);
}
