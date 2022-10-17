/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:20:06 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/17 16:27:33 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array
{
public:
	Array();
	Array(Array const &src);
	Array &operator=(Array const &rhs);
	~Array();
private:
	T *_array;
};
