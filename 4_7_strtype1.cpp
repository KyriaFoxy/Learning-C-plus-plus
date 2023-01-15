//
//  4_7_strtype1.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 15/01/2023.
//

// using C++ string class
#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "pantera";
    
    cout << "Input cat type: ";
    cin >> charr1;
    cout << "Input another cat type: ";
    cin >> str1;
    cout << "These are chosen cat types:\n";
    cout << charr1 << " " << charr2 << " "
    << str1 << " " << str2 << endl;
    cout << "The third letter in word " << charr2 << " is "
    << charr2[2] << endl;
    cout << "The third letter in word " << str2 << " is "
    << str2[2] << endl;
    
    return 0;
}
// Output:
/*
 Input cat type: siberian
 Input another cat type: egyptian
 These are chosen cat types:
 siberian jaguar egyptian pantera
 The third letter in word jaguar is g
 The third letter in word pantera is n
 */