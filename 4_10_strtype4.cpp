//
//  4_10-strtype4.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 15/01/2023.
//

// inputing data in lines
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    char charr[20];
    string str;
    
    cout << "String length in variable char before data input: "
    << strlen(charr) << endl;
    cout << "String length in str variable before data input: "
    << str.size() << endl;
    cout << "Input text line:\n";
    cin.getline(charr, 20);
    cout << "Inputed: " << charr << endl;
    cout << "Input another part of a text:\n";
    getline(cin, str);
    cout << "Inputed: " << str << endl;
    cout << "String length in charr variable after data input: "
    << strlen(charr) << endl;
    cout << "String length in str variable after data input:"
    << str.size() << endl;
    
    return 0;
}
// Output:
/*
 String length in variable char before data input: 0
 String length in str variable before data input: 0
 Input text line:
 Python
 Inputed: Python
 Input another part of a text:
 Rust
 Inputed: Rust
 String length in charr variable after data input: 6
 String length in str variable after data input:4
 */
