/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:38:36 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/16 15:01:43 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

#define ASCII_TYPE 42
#define FLOAT_TYPE 43
#define DOUBLE_TYPE 44
#define SPECIAL_CASES 45

void	special_cases_handling(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
		std::cout << "float: nanf" << std::endl;
	else if (str == "-inf" || str == "-inff")
		std::cout << "float: -inff" << std::endl;
	else
		std::cout << "float: inff" << std::endl;
	if (str == "nan" || str == "nanf")
		std::cout << "double: nan" << std::endl;
	else if (str == "-inf" || str == "-inff")
		std::cout << "float: -inf" << std::endl;
	else
		std::cout << "float: inf" << std::endl;
}

void	ascii_handling(int value)
{
	if (value < 32 || value > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double " << static_cast<double>(value) << std::endl;
}

void	float_handling(float value, std::string str)
{
	try
	{
		std::stoi(str);
		if (value < 32 || value > 127)
		std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	int i; int j;
	for (i = 0; str[i]; i++)
		if (str[i] == '.')
			break;
	for (i++; str[i]; i++)
		j++;
	if (j > 17) j = 17;
	std::cout << std::fixed << std::setprecision(j - 1) << "float: " << value << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(j - 1) << "double " << static_cast<double>(value) << std::endl;
}

void	double_handling(double value, std::string str)
{
	try
	{
		std::stoi(str);
		if (value < 32 || value > 127)
		std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	int i; int j;
	for (i = 0; str[i]; i++)
		if (str[i] == '.')
			break;
	for (i++; str[i]; i++)
		j++;
	if (j > 17) j = 17;
	std::cout << std::fixed << std::setprecision(j) << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(j) << "double " << value << std::endl;	
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
	switch (type)
	{
		case SPECIAL_CASES:
			special_cases_handling(str);
			break;
		case FLOAT_TYPE:
			float_handling(std::stof(str), str);
			break;
		case DOUBLE_TYPE:
			double_handling(std::stod(str), str);
			break;
		case ASCII_TYPE:
			ascii_handling(std::stoi(str));
			break;
	}
	return 0;
}
