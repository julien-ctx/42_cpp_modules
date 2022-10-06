/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:18:20 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/06 17:03:41 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}

Point &Point::operator=(Point const &rhs)
{
	if (this != &rhs)
		Fixed(const_cast<Fixed *>(this->_x)) = Fixed(const_cast<Fixed *>(rhs._x));
	return *this;
}

Point::Point (float const i, float const j) : _x(i), _y(j) {}

Point::Point(Point const &src)
{
	*this = src;
}

float	Point::getX() const
{
	return (this->_x.toFloat());
}

float	Point::getY() const
{
	return (this->_y.toFloat());
}

Point::~Point() {}
