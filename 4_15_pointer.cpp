//
//  4_15_pointer.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 19/01/2023.
//

// the very first pointer variable
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int updates = 6;
    int * p_updates; // pointer declaration on int
    
    p_updates = &updates;
    
    // showing values
    cout << "Values: updates = " << updates;
    cout << ", p_updates = " << *p_updates << endl;
    
    // showing addresses
    cout << "Addresses: updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    // using pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    
    return 0;
}
// Output:
/*
 Values: updates = 6, p_updates = 6
 Addresses: updates = 0x16fdff1ec, p_updates = 0x16fdff1ec
 Now updates = 7
 */