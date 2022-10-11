/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:26:46 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 17:30:48 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
	*this = src;
}

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &)
{
	return *this;
}

IMateriaSource::~IMateriaSource() {}
