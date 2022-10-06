/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:05:05 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/06 16:54:33 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
	Fixed ret(float(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY() + c.getX() * (a.getY() - b.getY()/2.0))));
	return ret;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);
	
	return (A.toInt() == A1.toInt() + A2.toInt() + A3.toInt());
}
