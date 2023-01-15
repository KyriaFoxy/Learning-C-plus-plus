//
//  4_2_strings.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// saving string in arrays
#include <iostream>
#include <cstring>

int main(int argc, const char * argv[])
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Howdy! My name is " << name2;
    cout << "! And what is your name?\n";
    cin >> name1;
    cout << "So, so, " << name1 << ", your name has ";
    cout << strlen(name1) << " letter and is saved\n";
    cout << "in array containing " << sizeof(name1) << " bytes.\n";
    cout << "Your first letter is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "First three letters of my name are: ";
    cout << name2 << endl;
    
    
    return 0;
}
// Output:
/*
 Howdy! My name is C++owboy! And what is your name?
 Astryda
 So, so, Astryda, your name has 7 letter and is saved
 in array containing 15 bytes.
 Your first letter is A.
 First three letters of my name are: C++
 */
