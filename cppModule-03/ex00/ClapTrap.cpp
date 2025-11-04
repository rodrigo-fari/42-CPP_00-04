/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:15:47 by rde-fari          #+#    #+#             */
/*   Updated: 2025/11/04 17:17:28 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
*File organization
===================| OCF |
*Default Constructor
*Parameter Constructor
*Copy Constructor
*Copy assignment constructor (Operator Overload)
*Destructor

===================| Main Methods |
TODO - Take Damage fnct
TODO - Attack fnct
TODO - Be repaired fnct

===================| Getters |
TODO - Get Name
TODO - Get Hit Points
TODO - Get Energy Points
TODO - Get Attack Damage

===================| Setters |
TODO - Set Name
TODO - Set Hit Points
TODO - Set Energy Points
TODO - Set Attack Damage
 */

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "Parameter constructor called." << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called." << std::endl;
}
