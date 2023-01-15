//
//  4_3_instr1.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// reading more than one string - issues
#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Input your name:\n";
    cin >> name;
    cout << "Input your favourite dessert: \n";
    cin >> dessert;
    cout << "I have a " << dessert << " for you";
    cout << ", " << name << ".\n";
    
    return 0;
}
// Output:
/*
 Input your name:
 Astryda Malinowska
 Input your favourite dessert:
 I have a Malinowska for you, Astryda.
 */