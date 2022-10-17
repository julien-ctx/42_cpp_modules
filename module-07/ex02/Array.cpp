/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:21:20 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/17 16:38:29 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->_array = NULL;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete [] this->_array;
}
