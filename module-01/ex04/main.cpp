/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliencaucheteux <juliencaucheteux@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:20:28 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/03 16:39:04 by juliencauch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sys/stat.h>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: incorrect syntax." << std::endl;
		return 1;
	}
	struct stat path_stat;
    stat(av[1], &path_stat);
    int is_dir =  S_ISDIR(path_stat.st_mode);
	if (is_dir)
	{
		std::cout << "Error: path is a directory." << std::endl;
		return 1;
	}
	std::string	input_name(av[1]);
	std::ifstream input(input_name);
	if (!input)
	{
		std::cout << "Error: wrong filename." << std::endl;
		return 1;
	}
	std::string output_name = input_name + ".replace";
	std::ofstream output(output_name);
	while (input)
	{
		std::string line;
		getline(input, line);
		if (!line[0])
			break;
		std::string to_erase = av[2];
		std::string to_insert = av[3];
		std::string sub = line;
		int i = 0;
		while (1)
		{
			int pos = int(line.find(to_erase));
			if (pos < 0)
				break;
			line.erase(pos, to_erase.length());
			sub.erase(pos + i, to_erase.length());
			sub.insert(pos + i, to_insert);
			i = i + to_insert.length();
		}
		output << sub << "\n";
	}
}
