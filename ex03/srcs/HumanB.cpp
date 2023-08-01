/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:19:56 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 19:32:11 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

HumanB::HumanB(void)
{
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_Weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attacks with their " << this->_Weapon->getType() << std::endl; // _Weapon->getType() fleche car pointeur
}

void	HumanB::setWeapon(Weapon& weapon) // on passe une reference car si on passe Weapon weapon, on passe une copie et si on passe une copie on va enregistrer l'adresse d un objet qui sera detruit a la fin de la fonction
{
	this->_Weapon = &weapon; // on passe la reference de l'objet weapon mais on enregistre l'adresse de cet objet;
}
