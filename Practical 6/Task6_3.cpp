#include <iostream>
#include <fstream>
#include <string>
#include "Constant.h"
using namespace std;

int main()
{
    srand(time(0));

    int ranDemand;
    int destinationId;
    int capacityRange;
    int remainRange;
    int vehicleId;
    ofstream fout;

    fout.open("Task6_3.txt");

    fout << endl;

    ranDemand = rand() % 50 + 150;
    for (int i = 0; i < ranDemand; i++)
    {
        destinationId = rand() % 12;
        capacityRange = rand() % 201 + 350;
        remainRange = rand() % (capacityRange - 300) + 300;
        vehicleId = i;

        fout << "[" << vehicleId << ", " << destinationId << ", " << capacityRange << ", " << remainRange << "]" << endl;
    }

    fout.close();
    return 0;
}
