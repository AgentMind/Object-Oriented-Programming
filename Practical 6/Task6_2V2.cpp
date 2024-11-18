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

    cout << "vehicleId" << setw(25) << "destinationId" << setw(25) << "capacityRange" << setw(25) << "remainRange\n";
    while (!fin.eof())
    {
        string vechicleIdV1;
        string destinationIdV1;
        string capacityRangeV1;
        string remainRangeV1;
        string vechicleId;
        string destinationId;
        string capacityRange;
        string remainRange;

        getline(fin, word, ',');
        int counter;
        counter++;
        int destinationIdINT;

        switch (counter)
        {
        case 1:
            vechicleIdV1 = word;
            for (int i = 0; i < vechicleIdV1.length(); i++)
            {
                if (vechicleIdV1[i] != '[' && vechicleIdV1[i] != ']')
                {
                    vechicleId = vechicleIdV1[i];
                    cout << vechicleId;
                }
            }
            cout << setw(20);
            break;
        case 2:
            destinationIdV1 = word;
            for (int j = 0; j < destinationIdV1.length(); j++)
            {
                if (destinationIdV1[j] != '[' && destinationIdV1[j] != ']')
                {
                    destinationId = destinationIdV1[j];
                    destinationIdINT = stoi(destinationId);
                    cout << nameMap[destinationIdINT];
                }
            }
            cout << setw(20);
            break;
        case 3:
            capacityRangeV1 = word;
            for (int x = 0; x < capacityRangeV1.length(); x++)
            {
                if (capacityRangeV1[x] != '[' && capacityRangeV1[x] != ']')
                {
                    capacityRange = capacityRangeV1[x];
                    cout << capacityRange;
                }
            }
            cout << setw(20);
            break;
        case 4:
            remainRangeV1 = word;
            for (int m = 0; m < remainRangeV1.length(); m++)
            {
                if (remainRangeV1[m] != '[' && remainRangeV1[m] != ']')
                {
                    remainRange = remainRangeV1[m];
                    cout << remainRange;
                }
            }
            cout << setw(20);
            counter = 0;
            break;
        }
    }

    fin.close();

    return 0;
}