/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/03 13:54:45 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* stringREF: any changes to stringREF will also affect the 'strOG' string */
/* Logic:
- & to obtain the memory address of a variable
- for references & is not needed, because references are essentially only
an alternative name for the variable it refers to -> therefore you directly
assign the variable itself, not its memory address */

int main()
{
	std::string	strOG = "HI THIS IS BRAIN";
	std::string *stringPTR = &strOG;
	std::string	&stringREF = strOG;
	
	std::cout << "Address of strOG: " << &strOG << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "Value of string variable: " << strOG << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}