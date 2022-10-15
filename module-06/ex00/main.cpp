/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:20 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/15 17:17:26 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	char_handling(char *s)
{
	int	nb = atoi(s);
	if (nb < 32 || nb > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' <<static_cast<char>(nb) << '\'' << std::endl;
}

void	int_handling(char *s)
{

}

void	float_handling(char *s)
{

}

void	double_handling(char *s)
{
	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please use a correct format: ./convert value\n";
		return 1;
	}
	char_handling(av[1]);
	int_handling(av[1]);
	float_handling(av[1]);
	double_handling(av[1]);
}
