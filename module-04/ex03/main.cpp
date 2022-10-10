/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:44:16 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/10 17:56:20 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		Cat cat;

		std::cout << "Animal class is instantiated only by subclass" << std::endl;
		return 0;
	}
}

// Add this to test if the exercise if correctly done
// Animal wolf;
