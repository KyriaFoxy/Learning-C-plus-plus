//
//  4_9_strtype3.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 15/01/2023.
//

// another possibilities of string class
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "pantera";
    
    str1 = str2; // copying content of str2 to str1
    strcpy(charr1, charr2); // copying content of charr2 to charr1
    
    str1 += " python";
    strcat(charr1, " juice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    
    cout << "String " << str1 << " has "
    << len1 << " characters.\n";
    cout << "String " << charr1 << " has "
    << len2 << " characters.\n";
    
    return 0;
}
// Output:
/*
 String pantera python has 14 characters.
 String jaguar juice has 12 characters.
 */