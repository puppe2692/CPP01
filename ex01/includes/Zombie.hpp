/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:13:35 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 14:11:39 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public :

		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setname(std::string name);

	private :

		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

# endif