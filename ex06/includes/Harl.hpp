/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:12:37 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 11:49:13 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

#	define DEBUG "I love having extra bacon for my XXL-double-cheese-triple-pickle-special-burger. I really do!"
#	define INFO "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger !"
#	define WARNING "I think I deserve extra bacon for free."
#	define ERROR "This is unnaceptable ! I want to speak to the manager now."


class Harl
{
	public :
		Harl(void);
		~Harl(void);


		void complain( std::string level );

	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

typedef void (Harl::*Functiontab)();

#endif