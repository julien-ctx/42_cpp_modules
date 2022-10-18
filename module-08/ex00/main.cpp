/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:48:03 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/18 11:56:17 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	// Testing with vectors
	int values[5] = {42, 43, 44, 45, 46};
	std::vector<int> vect(values, values + sizeof(values) / sizeof(int));
	easyfind(vect, 41) ? std::cout << "Yes\n" : std::cout << "No\n";
}
