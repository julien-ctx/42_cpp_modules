/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:56:28 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/05 11:42:41y jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _i(0) {}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

int	Fixed::getRawBits() const
{
	return this->_i;
}

void Fixed::setRawBits(int const raw)
{
	this->_i = raw;

}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_i = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed () {}
