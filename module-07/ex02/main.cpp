/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:24:47 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/17 18:49:13 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> tab(20);
	
	std::cout << "Default values\n";
	tab.printArray();
	
	std::cout << "\n\n";
	
	std::cout << "All int values initialized to incrementing integers\n";
	tab.createNbList();
	tab.printArray();

	std::cout << "\n\n";
	
	std::cout << "Creating tab2 with copy constructor and tab as a parameter\n";
	Array<int> tab2(tab);
	tab2.printArray();

	std::cout << "\n\n";
	
	std::cout << "Editing tab value and replacing 10 value with 42 value\n";
	tab.editIndex(10, 42);
	std::cout << tab[10] << std::endl;

	std::cout << "\n\n";

	std::cout << "Printing tab2 value to ensure old values are still the same\n";
	tab2.printArray();
}
