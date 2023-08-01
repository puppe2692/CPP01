/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:34:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 15:52:00 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	ft_atoi(std::string str)
{
	int	i;
	int	rslt;
	int	sign;

	i = 0;
	rslt = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == 45)
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		rslt = rslt * 10;
		rslt = rslt + str[i] - 48;
		i++;
	}
	return (rslt * sign);
}

int isposnumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	Zombie		*Horde;
	int			N;
	std::string name;
	int			i = 0;

	if (argc != 3)
	{
		std::cout << "Wrong Number of input" << std::endl;
		std::exit(1);
	}
	if (!isposnumber(argv[1]))
	{
		std::cout << "First input must be a positive number" << std::endl;
		std::exit(1);
	}
	else
		N = ft_atoi(argv[1]);
	name = argv[2];
	Horde = zombieHorde(N, name);
	while (i < N)
	{
		Horde[i].announce(); // pas fleche car pas pointeur
		i++;
	}
	delete [] Horde;
}
