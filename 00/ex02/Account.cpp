#include "Account.hpp"
#include <iostream>

Account::Account()
{
    _nbDeposits = 0;
    _amount = 0;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";amount:"
              << _amount << ";created" << std::endl;
}

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
}

int Account::getTotalAmount(void)
{
}

int Account::getNbDeposits(void)
{
}

int Account::getNbWithdrawals(void)
{
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:"
              << _totalAmount << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"
              << p_amount << ";deposit:" << deposit
              << ";amount:" << _amount << ";nb_deposits:"
              << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;
    _displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:"
                  << p_amount << ";withdrawal: refused"
                  << std::endl;
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:"
                  << p_amount << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount << ";nb_withdrawals:"
                  << _nbWithdrawals << std::endl;
    }
}
int Account::checkAmount(void) const
{
    return (_amount);
}
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
              << _amount << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}