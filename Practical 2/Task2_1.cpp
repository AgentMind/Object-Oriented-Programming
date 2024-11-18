#include <iostream>
using namespace std;

void testDefaultArg(int day = 1, string month= "Jan", int year = 2023) {
cout << "Today is " << day << " " << month << " " << year << endl;
}

int main(){

    testDefaultArg(); // as no input is put it just prints out the values that were assigned 
    testDefaultArg(10); // as you in put 10, the variable day changes to 10, and gets printed alongside the other preassigned variables
    testDefaultArg(10, "Jul"); // same thing as above but Jul is inputted as well
    testDefaultArg(10, "Jul", 2023); // same thing as above but with 2023 



    return 0;
}

