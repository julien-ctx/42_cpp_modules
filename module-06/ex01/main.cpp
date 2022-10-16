/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:30:40 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/16 18:02:44by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Note: reinterpret cast only works with serialize data type > current type

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data *deserialize(uintptr_t raw)
{
	Data *ret = reinterpret_cast<Data *>(raw);
	return ret;
}

int main()
{
	Data test;
	test.value = 42;

	std::cout << &test << std::endl;
	std::cout << test.value << std::endl;
	Data *other = deserialize(serialize(&test));
	std::cout << other << std::endl;
	std::cout << other->value << std::endl;
}
