/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:38:36 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/16 11:47:49 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define ASCII_TYPE 42
#define FLOAT_TYPE 43
#define DOUBLE_TYPE 44
#define SPECIAL_CASES 45

void	char_handling(std::string str, int type)
{
	
}

void	int_handling(std::string str, int type)
{
	
}

void	float_handling(std::string str, int type)
{

}

void	double_handling(std::string str, int type)
{
	
}

int	check_type(std::string str)
{
	std::string special_cases[7] = {"+inf", "-inf", "inf", "+inff", "-inff", "inff", "nan"};

	for (int i = 0; i < 7; i++)
		if (str == special_cases[i])
			return SPECIAL_CASES;
	int f = 0; int d = 0; int b = 0; int i = -1;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[++i])
	{
		if (str[i] == '.')
			d++;
		else if (str[i] == 'f')
			f++;
		else if (str[i] < 48 || str[i] > 57)
			b++;
	}
	if (str.length() > 1)
	{
		if (b || f > 1 || d > 1)
			throw std::exception();
		else if (d && f)
			return FLOAT_TYPE;
		else if (d)
			return DOUBLE_TYPE;	
		std::stoi(str);
	}
	return ASCII_TYPE;	
	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please use a correct command format: ./convert [Number]\n";
		return 1;
	}
	std::string str = static_cast<std::string>(av[1]);
	int	type;
	try
	{
		type = check_type(str);
	}
	catch (std::exception &e)
	{
		std::cout << "Please use a correct number format\n";
		return 1;
	}
	char_handling(str, type);
	int_handling(str, type);
	float_handling(str, type);
	double_handling(str, type);
	return 0;
}
