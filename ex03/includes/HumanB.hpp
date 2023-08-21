/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:43:59 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/21 10:17:46 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "../includes/Weapon.hpp"

class HumanB
{
	public :

		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);
		void		attack(void);
		void		setWeapon(Weapon& weapon);

	private :
		std::string	_name;
		Weapon* _Weapon;
};

#endif