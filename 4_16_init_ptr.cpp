//
//  4_16_init_ptr.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 19/01/2023.
//

// the very first pointer variable
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int higgens = 5;
    int * pt = &higgens;
    
    cout << "Value of higgens variable = " << higgens;
    cout << ", address of higgens variable = " << &higgens << endl;
    cout << "Value of *pt = " << *pt;
    cout << ", value of pt = " << pt << endl;
    
    return 0;
}
// Output:
/*
 Value of higgens variable = 5, address of higgens variable = 0x16fdff1ec
 Value of *pt = 5, value of pt = 0x16fdff1ec
 */
