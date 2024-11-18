#include <iostream>
using namespace std;


void QuoandRem(int& numerator, int& denominator){
cout << "\nThe quotient is\n" << numerator / denominator << "\n"; 
cout << "\nThe remainder is\n" << numerator % denominator << "\n"; 
}

int main(){
int numerator;
int denominator; 
cout << "\nEnter Numerator:\n";
cin >>  numerator;
cout << "\nEnter Denominator:\n";
cin >> denominator; 
QuoandRem(numerator, denominator);
}