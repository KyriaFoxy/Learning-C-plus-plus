//
//  4_13_arrstruc.cpp
//  Learning C++
//
//  Created by Astryda KyriaFoxy Malinowska on 17/01/2023.
//

// array of structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    inflatable guests[2] =
    {
        {"bambi", 0.5, 21.99},
        {"godzilla", 200, 565.99},
    };
    
    cout << "Guests like " << guests[0].name << " and " << guests[1].name
    << " together have " << guests[0].volume + guests[1].volume << " cubic feet.\n";
    
    return 0;
}
// Output:
/*
 Guests like bambi and godzilla together have 200.5 cubic feet.
 */
