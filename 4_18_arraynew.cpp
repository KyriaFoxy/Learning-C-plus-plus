//
//  4_18_arraynew.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 19/01/2023.
//

// using 'new' operator to create an array
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] = " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] = " << p3[0] << ", and " ;
    cout << "p3[1] = " << p3[1] << ".\n";
    p3 = p3 - 1;
    delete [] p3;
    
    return 0;
}
// Output:
/*
 p3[1] = 0.5.
 Now p3[0] = 0.5, and p3[1] = 0.8.
 */