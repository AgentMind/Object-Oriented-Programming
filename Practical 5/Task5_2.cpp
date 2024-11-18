#include <iostream>

using namespace std;

#include "Student.h"

int main(){
    int units; 
    string inputName; 

    string a; 
    cout << "Please enter the name of the student (end with ?)" << endl; 
    getline(cin, a, '?');
    inputName = a;
    //cin >> inputName;  

    cout << "Please enter the number of units" << endl;
    cin >> units; 

    student s(inputName, units);
    s.run();


    return 0;
};
