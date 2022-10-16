/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:41:56 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/16 19:19:30 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()	
{
	srand((unsigned int)time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return dynamic_cast<Base *>(new A());
			break;
		case 1:
			return dynamic_cast<Base *>(new B());
			break;
		default:
			return dynamic_cast<Base *>(new C());
			break;
	}
}

void	identify(Base *p)
{
	A *ptrA = dynamic_cast<A *>(p);
	if (ptrA)
	{
		std::cout << "The real type of this base class is A.\n";
		return ;
	}
	B *ptrB = dynamic_cast<B *>(p);
	if (ptrB)
	{
		std::cout << "The real type of this base class is B.\n";
		return ;
	}
	C *ptrC = dynamic_cast<C *>(p);
	if (ptrC)
	{
		std::cout << "The real type of this base class is C.\n";
		return ;
	}
	std::cout << "This class doesn't match any subclasses!\n";
}

void	identify(Base &p)
{
	try
	{
		A &ptr = dynamic_cast<A &>(p);
		std::cout << "The real type of this base class is A.\n";
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B &ptr = dynamic_cast<B &>(p);
			std::cout << "The real type of this base class is B.\n";
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C &ptr = dynamic_cast<C &>(p);
				std::cout << "The real type of this base class is C.\n";
			}
			catch(const std::bad_cast& e)
			{
				std::cout << "This class doesn't match any subclasses!\n";
			}
		}
	}
}


int main()
{
	Base *test = generate();
	identify(test);
	identify(*test);
}
