//
//  4_8_strtype.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 15/01/2023.
//

// assigning, add and concatenation
#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    std::string s1 = "penguin";
    std::string s2, s3;
    
    
    std::cout << "One object can be assigned to another: s2 = s1\n";
    s2 = s1;
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
    std::cout << "There is possibility to assign string in C convention to object string\n";
    std::cout << "s2 = \"Python\"\n";
    s2 = "Python";
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "It is possible to concatenate two strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "it is possible to add strings\n";
    s1 += s2;
    std::cout << "s1 == s2 is equal to s1 = " << s1 << std::endl;
    s2 += " for a day";
    std::cout << "s2 += \" for a day\" is equal s2 = " << s2 << std::endl;
    
    return 0;
}
// Output:
/*
 One object can be assigned to another: s2 = s1
 s1: penguin, s2: penguin
 There is possibility to assign string in C convention to object string
 s2 = "Python"
 s2: Python
 It is possible to concatenate two strings: s3 = s1 + s2
 s3: penguinPython
 it is possible to add strings
 s1 == s2 is equal to s1 = penguinPython
 s2 += " for a day" is equal s2 = Python for a day
 */