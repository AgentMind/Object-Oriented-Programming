#include <iostream>
#include <cmath>
using namespace std;

int widthRiver;
int distanceFactory;
int priceUnder;
int priceOver;
int hypto;
int cost; 
int minCost = 100000000;
int minX;
int minY;
int leftOverX;

void calculatePrice(){
   for(int x = 0; x <= distanceFactory; x++){
    leftOverX = distanceFactory - x;
    hypto = sqrt((widthRiver * widthRiver) + (leftOverX * leftOverX));

    cost = (hypto * priceUnder) + (x * priceOver);
    
    if (minCost > cost){
        minCost = cost; 
        minX = leftOverX; 
        minY = hypto;
    }
}
}

int main(){
    cout << "Please enter the Width of the River: \n";
    cin >> widthRiver;
    cout << "Please enter the distance of the Factory: \n";
    cin >> distanceFactory;
    cout << "Please enter the Price of underwater cabling: \n";
    cin >> priceUnder; 
    cout << "Please enter the Price of land cabling: \n";
    cin >> priceOver;

    calculatePrice();

    cout << "The least total price is: " << minCost << "\n";
    cout << "The distance of X is: " << minX << "\n";
    cout << "The distance of Y is: " << minY << "\n";
}

