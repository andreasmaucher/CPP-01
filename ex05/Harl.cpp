/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/04 18:39:04 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void Harl::debug(void)
{
	std::cout <<  R"(Debug: I love having extra bacon for my 7XL-double-cheese-
	triple-pickle-specialketchup burger. I really do!)" << std::endl;
}

void Harl::info(void)
{
	std::cout << R"(Info: I cannot believe adding extra bacon costs more money.
	You didn’t put enough bacon in my burger! If you did, I
	wouldn’t be asking for more!)";
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << R"(Warning: I think I deserve to have some extra bacon for free.
	I’ve been coming for years whereas you started 
	working here since last month.)";
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

/* 
- uses an array of function pointers, each element of the array points to a
member function of the 'Harl' class;
- if the given level is found it retrieves the function pointer;
- void (Harl::*ptr)() = arr[index];: This line declares a pointer to a member
 function of the Harl class named ptr. The syntax void (Harl::*)() specifies
  that it's a pointer to a member function of the Harl class that takes no 
  arguments and returns void. It then initializes ptr with the function 
  pointer stored in the arr array at the index index.
- (this->*ptr)();: This line dereferences the ptr and calls the member 
function it points to on the current object (this). It's using the 
pointer-to-member-function syntax (object.*pointer_to_member_function)() 
to invoke the function.
*/
void Harl::complain(std::string level)
{
	function_p arr[4] = {&Harl::debug, &Harl::info, &Harl::warning,
							&Harl::error};
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 0;;
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			index = i;
	}
	if (index >= 0 && index < 4)
	{
		void (Harl::*ptr)() = arr[index];
		(this->*ptr)();
	}
	else
		std::cout << "Invalid level." << std::endl;	
}