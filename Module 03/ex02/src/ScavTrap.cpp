/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:17:07 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:12:13 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap : Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap : Parameterized Constructor Called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &obj )
{
	std::cout << "ScavTrap : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap&	ScavTrap::operator = ( const ScavTrap &rhs )
{
	std::cout << "ScavTrap : Copy Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->mName = rhs.mName;
		this->mHitPoints = rhs.mHitPoints;
		this->mEnergyPoints = rhs.mEnergyPoints;
		this->mAttackDamage = rhs.mAttackDamage;
	}
	return (*this);
}

void	ScavTrap::attack( const std::string& target )
{
	ClapTrap::attack(target);
	std::cout << "ScavTrap : " << this->mName << " made attack" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->mName << " in keeper mode" << std::endl;
}