#include<iostream>
using namespace std;

double findSales();
double sales;
double calculateCommission(); 
double commission;

int main(){

    findSales();
    calculateCommission();

    cout << "Commission made: " << commission * 100 << "%\n";

}

double findSales(){
    cout << "Please enter the amount of sales completed \n $";
    cin >> sales;
    
    return 0;
}

double calculateCommission(){
    if(sales < 1000){
        commission = 0.03;
    }
    else if (sales < 3000){
        commission = 0.035;
    }
    else {
        commission = 0.045;
    }
    
    return 0; 

}