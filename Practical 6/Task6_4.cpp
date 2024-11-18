// Program to demonstrate the CDAccount structure type.
#include <iostream>
#include <cmath>

#include "DepositAccount.h"
#include "LoanAccount.h"

using namespace std;

int main()
{
    // test deposit account
    DepositAccount dAccount;
    dAccount.inputData();
    double depositValue = dAccount.getBalanceMaturity();

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The balance of deposit at maturity is $"
         << depositValue << " after " << dAccount.getTerm() << " months." << endl;

    // test loan account
    cout << "\nTest loan account --- " << endl;
    LoanAccount lAccount;
    lAccount.inputData();

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The monthly payment of the loan is $"
         << lAccount.getMonthlyPayment() << " for " << lAccount.getTerm() << " months." << endl;
    return 0;
}