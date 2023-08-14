/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:56:14 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 12:03:44 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void)
{
	Harl harl;
	
	harl.complain("debug");
	harl.complain("info");
	harl.complain("error");
	harl.complain("warning");
	harl.complain("bonjour");
}