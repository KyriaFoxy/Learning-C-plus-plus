//
//  4_6_numstr.cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 14/01/2023.
//

// issue with mixing input data - strings and numbers
#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    
//    // 1st option - wrong:
   cout << "What year was your house built?\n";
   int year;
   cin >> year;
   cout << "Input your street name and number: \n";
   char address[80];
   cin.getline(address, 80);
   cout << "Built year: " << year << endl;
   cout << "Address: " << address << endl;
   cout << "Done!" << endl;
    
    // 2nd option - correct
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get(); //this is the easiest way to fix this issue
    cout << "Input your street name and number: \n";
    char address[80];
    cin.getline(address, 80);
    cout << "Built year: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;
    
    return 0;
}
// Output:
/*
 // 1st:
 What year was your house built?
 2013
 Input your street name and number:
 Built year: 2013
 Address:
 Done!
 
 //2nd:
 What year was your house built?
 2013
 Input your street name and number:
 Tęczowy Gaj 4/44
 Built year: 2013
 Address: Tęczowy Gaj 4/44
 Done!
 */
