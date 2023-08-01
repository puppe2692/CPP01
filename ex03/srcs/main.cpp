/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:12:15 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 19:35:53 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		std::cout << " After set weapon " << std::endl;
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

/* void test()
{
	std::string test; // Constructeur de std::string
} //Destructeur de std::string

void funcnimp()
{
	test();
} */

// Bien penser a la difference entre objet / adresse / ref / pointeur