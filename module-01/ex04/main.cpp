/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:20:28 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/02 18:05:00 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: incorrect syntax." << std::endl;
		return (1);
	}
	std::ifstream input;
	input.seekg(0, std::ios::end);
	// if (!input.good())
	// {
	// 	std::cout << "Error: path is a directory." << std::endl;
	// 	return (1);
	// }
	input.open(av[1], std::ios::in);
	if (!input)
	{
		std::cout << "Error: wrong filename." << std::endl;
		return (1);
	}
	std::ofstream output;
	std::string output_name = std::string(av[1]) + ".replace";
	output.open(output_name, std::ios::out);
	std::string line;
	while (input)
	{
		getline(input, line);
		if (!line[0])
			break;
		std::string to_erase = av[2];
		std::string to_insert = av[3];
		int pos = line.find(to_erase);
		if (pos > -1)
		{
			line.erase(pos, to_erase.length());
			line.insert(pos, to_insert);
		}
		output << line << "\n";
	}
	input.close();
	output.close();
}
