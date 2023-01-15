//
//  4_1_arrayone.cpp
//  Learnin C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// little arrays of integers
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {20, 30, 5};
    cout << "All ignams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "Package containing " << yams[1] << " ingnams costs ";
    cout << yamcosts[1] << " cents for bulb.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "Total ignams cost is equal: " << total << " cents.\n";
    
    cout << "\nyam array length = " << sizeof yams;
    cout << " bytes. ";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    
    return 0;
}
// Output:
/*
 All ignams = 21
 Package containing 8 ingnams costs 30 cents for bulb.
 Total ignams cost is equal: 410 cents.

 yam array length = 12 bytes. Size of one element = 4 bytes.
 */
