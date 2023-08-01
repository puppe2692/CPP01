/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:25:23 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 14:14:51 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *Horde = new Zombie[N]; // ici allocation need to be delete en dehors de la focntion 
	while (i < N)
	{
		Horde[i].setname(name);
		i++;
	}
	return (Horde);
}