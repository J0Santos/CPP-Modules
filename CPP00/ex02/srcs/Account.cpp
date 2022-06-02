#include "Account.hpp"

# define PRINT(x) std::cout << x << std::endl;


Account::Account(int initial_deposit) : _amount(initial_deposit) 
{
	PRINT("index:" << getNbAccounts() << ";" << "amount:" << initial_deposit << ";" << "created");
	_accountIndex = _nbAccounts++;
}

	// PRINT("accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawls:" << getNbWithdrawals() << ";" << "created");


Account::Account( void )
{
	_accountIndex = _nbAccounts++;
}

Account::~Account(void)
{
	PRINT("index:" << getNbAccounts() << ";" << "amount:" << _amount << ";" << "closed");
	_accountIndex = _nbAccounts++;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
}

void	Account::displayStatus( void ) const
{
	PRINT("index:" << _accountIndex << ";" << "amount:" << _amount);
}


void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	PRINT("LOL");
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
		return (false);
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
	}
	return (true);
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
