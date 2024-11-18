//Reads data and displays a bar graph showing productivity for each plant.
#include <iostream>

using namespace std;

#include "ProductionGraph.h"
// Dynamic memory allocation is just the process of managing memory throughout runtime instead of at the start
// saving memory and improving performance
// Uses heap instead of stack 


int main( )
{
    int size; 
    cout << "Please enter the number of plants" << endl;
    cin >> size; 

    ProductionGraph graph(size);
    graph.create();
}

