#include <iostream>
using namespace std;


void sort(int& a, int& b, int& c){
    int temp;
   
   
    if(a > c){
       temp = a;
       a = c; 
       c = temp;
    }
    if(a > b ){
        temp = a;
        a = b; 
        b = temp;
    }
    if(b > c){
        temp = b;
        b = c; 
        c = temp;
    }
}
    
int main(){
    int a,b,c;

    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    sort(a,b,c);
    
    cout << "a= " << a << "\t";
    cout << "b= " << b << "\t";
    cout << "c= " << c << "\t";
}
