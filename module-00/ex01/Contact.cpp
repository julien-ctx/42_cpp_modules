/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:09:43 by jcauchet          #+#    #+#             */
/*   Updated: 2022/09/28 20:54:43 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::init_one_contact()
{
	first_name[0] = 0;
}

void	Contact::set_info(std::string str, int info)
{
	if (info == FIRST_NAME)
		first_name = str;
	else if (info == LAST_NAME)
		last_name = str;
	else if (info == NICKNAME)
		nickname = str;
	else if (info == DARKEST_SECRET)
		darkest_secret = str;
	else
		phone_number = atoll((char *)(&str[0]));
}

void	Contact::print_contact()
{
	if (!first_name[0])
	{
		std::cout << "❌ \033[1;31mError: index doesn't represent any contact.\033[0m" << std::endl;
		return;
	}
	std::cout << std::endl << "👉 \033[1;37mFirst name: ";
	std::cout << first_name << std::endl;
	std::cout << "👉 " << "Last name: ";
	std::cout << last_name << std::endl;
	std::cout << "👉 "<< "Nickname: ";
	std::cout << nickname << std::endl;
	std::cout << "👉 " << "Darkest secret: ";
	std::cout << darkest_secret << std::endl;
	std::cout << "👉 " << "Phone number: ";
	std::cout <<  phone_number << "\033[0m" << std::endl << std::endl;
}

void	Contact::print_one_info(std::string str)
{
	int	len;

	len = strlen(&str[0]);
	if (len <= 10)
	{
		for (int i = 0; i < 10 - len; i++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

int	Contact::print_contact_tab(int i)
{
	if (!first_name[0])
		return 1;
	std::cout << "         \033[1;34m" << i;
	std::cout << "|";
	print_one_info(first_name);
	std::cout << "|";
	print_one_info(last_name);
	std::cout << "|";
	print_one_info(nickname);
	std::cout << std::endl;
	std::cout << "\033[0m";
	return 0;
}
