/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:01:10 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 19:12:31 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _Weapon(weapon)
{
	std::cout << "Default constructor HumanA" << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "Default Destructor HumanA" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << "attacks with their " << this->_Weapon.getType() << std::endl;
}
