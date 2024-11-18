#ifndef TASK6ACCOUNT_H
#define TASK6ACCOUNT_H

using namespace std;

class Account {
protected:
    double initialBalance;
    double interestRate;
    int term;
public:
    void inputData();
    int getTerm();

};
int Account::getTerm(){
    return term; 
}


void Account::inputData() {
    cout << "Enter the amount of initial balance: $";
    cin >> this->initialBalance;
    cout << "Enter interest rate percent per annual: ";
    cin >> this->interestRate;
    cout << "Enter the number of months: ";
    cin >> this->term;
}







#endif