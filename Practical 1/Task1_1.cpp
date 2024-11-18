#include <iostream>
/*
iostream stands for standard-input-output-stream
the iostream library uses objects that provide input and output functionality.

include isotream basically pulls a library that uses objects that allow
us to use the most standard c++ commands/objects, such as cout and cin
*/

using namespace std;
/*
Most of the commands/objects in iostream or other libraries
use std in front of there commands/onjects

namespace pretty much groups those objects/commands to make it easier to write
instead of having to write std::cout, we can write cout
*/

int main()
{

    
    int value;
    int *ptr;
    ptr = &value;
    value = 100;
    cout << endl << *ptr << endl;
    *ptr = 200; //*ptr is a l-value
    cout << value << endl;
}