/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/20 21:51:59 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

/* private variables always with an underscore */

class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;
	
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void) const;
		void setWeapon(Weapon &weapon);
};

#endif