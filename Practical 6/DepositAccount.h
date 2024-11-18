#ifndef DEPOSITACCOUNT_H
#define DEPOSITACCOUNT_H

#include "Account.h"

class DepositAccount : public Account
{
public:
    double getBalanceMaturity();
};

double DepositAccount::getBalanceMaturity() {
    double rateFraction, interest;
    rateFraction = this->interestRate/100.0;
    interest = this->initialBalance*(rateFraction*(this->term/12.0));//simple interest
    double balanceAtMaturity = this->initialBalance + interest;

    return balanceAtMaturity;
}


#endif