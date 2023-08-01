/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:44:12 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 19:19:18 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "../includes/Weapon.hpp"

class HumanA
{
	public :

		// HumanA(); // Constructeur par default
		// HumanA (const HumanA& other); // Constructeur par copie
		HumanA(std::string name, Weapon& weapon); // Constructeur parametrique
		~HumanA(void);
		void		attack(void);

	private :
		std::string	_name;
		Weapon &_Weapon;
};

#endif