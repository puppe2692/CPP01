/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:36:36 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/31 14:43:38 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void randomChum( std::string name )
{
	Zombie Brain2(name); // tu crees un objet zombie du nom de brain2 auquel ttu assigne un name (name);
	Brain2.announce();
}