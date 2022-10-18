/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:42:39 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/18 12:09:40 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>

template<typename T>
bool	easyfind(T array, int nb)
{
	for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it )
		if (*it == nb)
			return true;
	return false;
}
