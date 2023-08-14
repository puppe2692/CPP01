/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:27:06 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 12:25:30 by nwyseur          ###   ########.fr       */
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
	std::cout << DEBUG << std::endl;
	return;
}

void Harl::info(void)
{
	std::cout << INFO << std::endl;
	return;
}

void Harl::warning(void)
{
	std::cout << WARNING << std::endl;
	return;
}

void Harl::error(void)
{
	std::cout << ERROR << std::endl;
	return;
}

void	Harl::complain(std::string level)
{
	int	i;

	Functiontab functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[4] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			((this)->*functions[i])();
			return;
		}
		i++;
	}
	std::cout << "Undefined Level of alert" << std::endl;
	return;
}