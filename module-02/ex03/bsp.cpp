/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:05:05 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/06 18:10:32 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float area(Point const a, Point const b, Point const c)
{
	float ret((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0);
	if (ret < 0)
		ret = -ret;
	return ret;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area(a, b, c);
	float A1 = area(point, b, c);
	float A2 = area(a, point, c);
	float A3 = area(a, b, point);
	
	return (A == A1 + A2 + A3);
}
