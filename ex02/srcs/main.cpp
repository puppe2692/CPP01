/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:02:07 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/01 16:08:43 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void)
{
	std::string Brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &Brain;
	std::string &stringREF = Brain;

	std::cout << "adresse String :" << &Brain << std::endl;
	std::cout << "adresse PTR :" << &stringPTR << std::endl;
	std::cout << "adresse REF :" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value String :" << Brain << std::endl;
	std::cout << "Value PTR :" << *stringPTR << std::endl;
	std::cout << "Value REF :" << stringREF << std::endl;
}