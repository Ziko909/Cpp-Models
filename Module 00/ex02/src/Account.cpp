/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:58:58 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/27 11:05:51 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int inital_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = inital_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += inital_deposit;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "  index:" << _accountIndex
	<< ";" << "amount:"<< _amount << ";"
	<< "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "  index:" << _accountIndex
	<< ";" << "amount:" << _amount << ";"
	<< "closed" << std::endl;
}


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "  accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals()
	<< std::endl;
	return;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "  index:" << _accountIndex << ";"
	<< "p_amount:" << _amount << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << _amount + deposit << ";"
	<< "nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;

	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "  index:"
	<< _accountIndex << ";" << "p_amount:"
	<< _amount << ";" << "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";"
		<< "amount:" << _amount - withdrawal << ";"
		<< "nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "  index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	
	now = time(NULL);
	std::cout << "[" << localtime(&now)->tm_year + 1900
	<< localtime(&now)->tm_mon << localtime(&now)->tm_mday << "_"
	<< localtime(&now)->tm_hour << localtime(&now)->tm_min
	<< localtime(&now)->tm_sec << "]";
}
