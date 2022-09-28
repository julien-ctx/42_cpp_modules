/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:09:31 by jcauchet          #+#    #+#             */
/*   Updated: 2022/09/28 19:19:55 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::init_contacts()
{
	for (int i = 0; i < 8; i++)
		contacts[i].init_one_contact();
}

void	PhoneBook::add_contact(int *i)
{
	std::string str;
	std::cout << "👉 \033[1;37mFirst name\033[0m" << std::endl;
	getline(std::cin, str);
	contacts[*i].set_info(str, FIRST_NAME);
	std::cout << "👉 \033[1;37mLast name\033[0m" << std::endl;
	getline(std::cin, str);
	contacts[*i].set_info(str, LAST_NAME);
	std::cout << "👉 \033[1;37mNickname\033[0m" << std::endl;
	getline(std::cin, str);
	contacts[*i].set_info(str, NICKNAME);
	std::cout << "👉 \033[1;37mDarkest secret\033[0m" << std::endl;
	getline(std::cin, str);
	contacts[*i].set_info(str, DARKEST_SECRET);
	std::cout << "👉 \033[1;37mPhone number\033[0m" << std::endl;
	getline(std::cin, str);
	contacts[*i].set_info(str, PHONE_NUMBER);
	(*i)++;
}

void	PhoneBook::search_contact()
{
	std::string str;
	int	index;
	
	std::cout << std::endl << "\033[1;34m     index|first name| last name|  nickname\033[0m" << std::endl;
	for (int i = 0; i < 8; i++)
		if (contacts[i].print_contact_tab(i))
			break;
	std::cout << std::endl;
	std::cout << "👉 \033[1;37mIndex:\033[0m" << std::endl;
	getline(std::cin, str);
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "❌ \033[1;31mBad index format.\033[0m" << std::endl;
			return ;
		}
	}
	index = atoi(&str[0]);
	if (index < 0 || index > 7)
	{
		std::cout << "❌ \033[1;31mError: bad index number.\033[0m" << std::endl;
		return;
	}
	contacts[index].print_contact();
}

void	PhoneBook::exit_phonebook()
{
	exit(0);
}
