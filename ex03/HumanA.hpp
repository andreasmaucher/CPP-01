/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/03 18:08:35 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

/* private variables always with an underscore;
&_weapon is declared as a reference to the Weapon object. */

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void) const;
};

#endif