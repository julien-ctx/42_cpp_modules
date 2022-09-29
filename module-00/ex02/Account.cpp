/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:01:15 by jcauchet          #+#    #+#             */
/*   Updated: 2022/09/29 15:13:13 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
	std::cout << "[";
    std::cout << (now->tm_year + 1900);
	if (now->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout <<  (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << "0";
	std::cout << now->tm_mday;
	std::cout << "_";
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_sec;
	std::cout << "] ";
}

Account::Account()
{
	// this->_accountIndex = 0;
	// this->_amount = 0;
	// this->_nbDeposits = 0;
	// this->_nbWithdrawals = 0;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount +=deposit;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_amount += withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	return (true);
}

Account::Account(int initial_deposit)
{
	// Account();
	this->_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	this->_amount = initial_deposit;
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";";
	std::cout << std::endl;
}

Account::~Account()
{
	
}
