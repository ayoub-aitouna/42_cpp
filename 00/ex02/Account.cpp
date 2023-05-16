#include "Account.hpp"

Account::Account()
{
}

Account::Account(int initial_deposit)
{
}

Account::~Account()
{
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
}

void Account::makeDeposit(int deposit)
{
}
bool Account::makeWithdrawal(int withdrawal)
{
}
int Account::checkAmount(void) const
{
    return (_amount);
}
void Account::displayStatus(void) const
{
    std::cout << 
}