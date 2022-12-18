/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:12:00 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:28:36 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : mName("none"), mHitPoints(100), mEnergyPoints(100), mAttackDamage(30)
{
	std::cout << "ClapTrap : Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : mName(name), mHitPoints(100), mEnergyPoints(100), mAttackDamage(30)
{
	std::cout << "ClapTrap : Parameterized Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &obj )
{
	std::cout << "ClapTrap : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor Called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &rhs )
{
	std::cout << "ClapTrap : Copy Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->mName = rhs.mName;
		this->mHitPoints = rhs.mHitPoints;
		this->mEnergyPoints = rhs.mEnergyPoints;
		this->mAttackDamage = rhs.mAttackDamage;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->mHitPoints > 0 && this->mEnergyPoints > 0)
	{
		this->mEnergyPoints--;
		std::cout << this->mName << " attacks " << target << ", causing " << this->mAttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "You don't have enough points to do an attack" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->mName << " lose " << amount << " hit points" << std::endl;
	this->mHitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->mHitPoints += amount;
	this->mEnergyPoints--;
	std::cout << "ClapTrap " << this->mName << " get " << amount << " hit points back" << std::endl;
}

std::string	ClapTrap::get_Name( void ) const
{
	return (this->mName);
}

unsigned int	ClapTrap::get_attack_damage( void ) const
{
	return (this->mAttackDamage);
}

