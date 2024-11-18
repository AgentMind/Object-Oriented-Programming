#include <iostream>
#include <fstream>
#include <string>

#include "Constant.h"

using namespace std;

int main()
{

    ifstream fin;
    fin.open("ChargingDemands.txt");

    string word;

    cout << "vehicleId" << setw(5) << "destinationId" << setw(20) << "capacityRange" << setw(20) << "remainRange\n";
    int vechicleId;
    int destinationId;
    int capacityRange;
    int remainRange;

    char ignore;
    while (!fin.eof())
    {

        fin >> ignore >> vechicleId >> ignore >> destinationId >> ignore >> capacityRange >> ignore >> remainRange >> ignore;
        cout << setw(5) << vechicleId;
        cout << setw(20) << nameMap[destinationId];
        cout << setw(20) << capacityRange;
        cout << setw(20) << remainRange;
        cout << endl;
    }

    fin.close();

    return 0;
}