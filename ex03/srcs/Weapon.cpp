/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:32:21 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/21 10:25:04 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::Weapon(const Weapon& other)
{
	// std::cout << " Copying weapon " << std::endl;
	_type = other._type;
}

Weapon::~Weapon(void)
{
	// std::cout << "Destructing the weapon" << std::endl;
	return ;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}