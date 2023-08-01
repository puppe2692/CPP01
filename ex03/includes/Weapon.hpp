/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:27:13 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 19:24:33 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public :

		Weapon(void);
		Weapon(std::string type);
		Weapon(const Weapon& other);
		~Weapon(void);

		const std::string&	getType(void);
		void				setType(std::string type);
		
	private :

		std::string	_type;
};

#endif