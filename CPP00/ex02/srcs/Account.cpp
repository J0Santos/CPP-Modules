#include "Account.hpp"

# define PRINT(x) std::cout << x << std::endl;


Account::Account(int initial_deposit) : _amount(initial_deposit) 
{
	_displayTimestamp();
	PRINT("index:" << getNbAccounts() << ";" << "amount:" << initial_deposit << ";" << "created");
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::Account( void )
{
	_accountIndex = _nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	PRINT("index:" << getNbAccounts() << ";" << "amount:" << _amount << ";" << "closed");
	_accountIndex = _nbAccounts--;
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
	_displayTimestamp();
	PRINT("accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << ";");
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	PRINT("index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << ";");
}


void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";
	_amount += deposit;
	PRINT("amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << ";");
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		PRINT("index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:" << "refused");
		return (false);
	}
	else
	{
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	PRINT("amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << ";");
	return (true);
	}
}

void	Account::_displayTimestamp( void )
{
	time_t	timestamp;
	char	buffer[16];

	time(&timestamp);
	strftime(buffer, 16, "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buffer << "] ";
}


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
