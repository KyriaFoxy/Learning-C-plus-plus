//
//  4_5_instr3.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// using get() function for input more than one word
#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Please input your full name: ";
    cin.get(name, ArSize).get();
    cout << "Please input your favourite dessert: ";
    cin.get(dessert, ArSize).get();
    cout << "Hey! I have a delicious " << dessert << " for you";
    cout << ", " << name << ".\n";
    
    return 0;
}
// Output:
/*
 Please input your full name: Astryda Malinowska
 Please input your favourite dessert: chocolate brownie
 Hey! I have a delicious chocolate brownie for you, Astryda Malinowska.
 */