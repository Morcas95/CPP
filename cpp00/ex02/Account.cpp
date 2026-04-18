#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	    Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int     Account::getTotalAmount(void)
{
    return _totalAmount;
}

int     Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;
    _displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount = _amount - withdrawal;
    _nbWithdrawals++;
    _totalAmount = _totalAmount - withdrawal;
    _totalNbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void	Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _amount = _amount + deposit;
    _nbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
    int accounts = getNbAccounts();
    int total = getTotalAmount();
    int deposits = getNbDeposits();
    int withdrawals = getNbWithdrawals(); 
    _displayTimestamp();
    std::cout << "accounts:" << accounts << ";total:" << total << ";deposits:" << deposits << ";withdrawals:" << withdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    char time[16];
    std::time_t t = std::time(NULL);
    std::tm *tm = std::localtime(&t);
    std::strftime(time, 16, "%Y%m%d_%H%M%S", tm);
    std::cout << "[" << time << "] ";
}

Account::Account(int initial_deposit)
{
    _accountIndex = Account::_nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount = _totalAmount + initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
    _totalAmount = _totalAmount - _amount;
    _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}