/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:16:51 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/18 15:31:57 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const &src) : _size(src._size)
{
}

Span &Span::operator=(Span const &rhs)
{
	(void)rhs;
	return *this;
}

void	Span::addNumber(int nb)
{
	if (this->_array.size() + 1 > this->_size)
		throw TooMuchNumbers();
	this->_array.push_back(nb);
}

int	Span::getCurrSize() const
{
	return this->_array.size();
}

int	Span::getMaxSize() const
{
	return this->_size;
}

std::ostream &operator<<(std::ostream &o, Span const &obj)
{
	o << "Current array size is " << obj.getCurrSize();
	std::cout << " and max size is " << obj.getMaxSize() << std::endl;
	return o;
}

Span::~Span() {}
