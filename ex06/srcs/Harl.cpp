/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:27:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/21 10:46:04 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << DEBUG << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << INFO << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << WARNING << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << ERROR << std::endl;
	return;
}

void	Harl::complain(std::string level)
{
	int	i;

	Functiontab functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (levels[i] != level)
		i++;
	if (i >= 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		while (i < 4)
		{
			((this)->*functions[i])();
			i++;
		}
	}
	return;
}