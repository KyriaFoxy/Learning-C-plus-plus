//
//  4_14_address.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 19/01/2023.
//

// using operator & for retrieving address
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int donuts = 6;
    double cups = 4.5;
    
    cout << "Value of donuts variable = " << donuts;
    cout << ", and address of this variable = " << &donuts << endl;
    
    cout << "Value of cups variable = " << cups;
    cout << ", and address of this variable = " << &cups << endl;
    
    return 0;
}
// Output:
/*
 Value of donuts variable = 6, and address of this variable = 0x16fdff1ec
 Value of cups variable = 4.5, and address of this variable = 0x16fdff1e0
 */
