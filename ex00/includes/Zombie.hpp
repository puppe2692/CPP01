/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:13:35 by nwyseur           #+#    #+#             */
/*   Updated: 2023/07/31 14:43:35 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public :

		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private :

		std::string	_name;
};

void randomChum( std::string name );
Zombie* newZombie( std::string name );

# endif