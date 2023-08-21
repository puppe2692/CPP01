/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:44:12 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/21 10:22:40 by nwyseur          ###   ########.fr       */
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

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void		attack(void);

	private :
	
		std::string	_name;
		Weapon &_Weapon;
};

#endif