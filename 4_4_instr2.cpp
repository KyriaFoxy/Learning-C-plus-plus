//
//  4_4_instr2.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// repaired string input with arrays with getline() function
#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Input your full name: \n";
    cin.getline(name, ArSize);
    cout << "Input your favourite dessert: \n";
    cin.getline(dessert, ArSize);
    cout << "Hey! I have a delicious " << dessert << " for you";
    cout << ", " << name << ".\n";
    
    return 0;
}
// Output:
/*
 Input your full name:
 Astryda Malinowska
 Input your favourite dessert:
 brownie
 Hey! I have a delicious brownie for you, Astryda Malinowska.
 */