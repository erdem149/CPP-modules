#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit )
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:"<<_amount<<";created\n";
	_totalAmount += _amount;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:"<<_amount<<";closed\n";
}

int Account::getNbAccounts(void)
{
	return(_nbAccounts++);
}

int Account::getNbDeposits(void)
{
	return(_totalNbDeposits++);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals++);
}

void	Account::_displayTimestamp(void)
{
	std::time_t	time;

	time = std::time(NULL);
	std::cout << std::setfill('0') << "["
		<< std::setw(2) << 1900 + std::localtime(&time)->tm_year
		<< std::setw(2) << 1 +  std::localtime(&time)->tm_mon
		<< std::setw(2) << std::localtime(&time)->tm_mday << "_"
		<< std::setw(2) << std::localtime(&time)->tm_hour
		<< std::setw(2) << std::localtime(&time)->tm_min
		<< std::setw(2) << std::localtime(&time)->tm_sec
		<< "] " << std::flush;
}

void	Account::displayAccountsInfos(void) //****************
{
	_displayTimestamp();
	std::cout << "accounts:"<< _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}


void	Account::makeDeposit( int deposit ) //****************
{
	_displayTimestamp();
	getNbDeposits();
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits<<"\n";
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) //****************
{
	_displayTimestamp();
	std::cout<<"index:" << _accountIndex << ";p_amount:"<<_amount;
	if(withdrawal > _amount || withdrawal<0)
	{
		std::cout<<";withdrawal:refused\n";
		return(false);
	}
	getNbWithdrawals();
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout<<";withdrawal:"<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:"<< ++_nbWithdrawals <<"\n";
	return(true);
}
void	Account::displayStatus( void ) const //****************
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}
