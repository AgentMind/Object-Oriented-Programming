#ifndef  LOANACCOUNT_H
#define  LOANACCOUNT_H

#include "Account.h"
#include <cmath>

class LoanAccount : public Account{
public:
    double getMonthlyPayment();
};

double LoanAccount::getMonthlyPayment() {
    double rateFraction = this->interestRate/(12.0*100.0);
    double payment = this->initialBalance * (rateFraction + rateFraction / (pow(1+rateFraction,this->term)-1.0));//simple interest
    return payment;
}

#endif