// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 31 23:45:02 2021                      //
//                Last update : Wed Jan 04 09:23:52 2022                      //
//                Made by : Adrien "Untel" Fernandes <adrien@fernandes.bzh>   //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) :
	_accountIndex(Account::_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
}

Account::~Account (void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->checkAmount();
}

int
	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int
	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int
	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int
	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void
	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void
	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	else
	{
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << "amount:" << this->checkAmount() << ";";
		this->_nbDeposits += 1;
		Account::_totalNbDeposits += 1;
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool
	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (withdrawal < 0
		|| this->checkAmount() - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->checkAmount() << ";";
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int
	Account::checkAmount(void) const
{
	return (this->_amount);
}

void
	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void
	Account::_displayTimestamp(void)
{
	# ifdef DEBUG
		std::cout << "[19920104_091532] ";
		return ;
	# else
		time_t		timestamp;
		char		buff[16];

		time(&timestamp);
		strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
		std::cout << "[" << buff << "] ";
	#endif
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c += 1-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// His boss is still a dick                                                   //
// ************************************************************************** //
