//
//  .cpp
//  Learning C++
//
//  Created by Astryda Malinowska on 19/01/2023.
//

// using 'new' operator
#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;
    
    cout << "Value of nights = ";
    cout << nights << ", address = " << &nights << endl;
    
    cout << "int ";
    cout << "value = " << *pt << ", address = " << pt << endl;
    
    double * pd = new double;
    *pd = 10000001.0;
    
    cout << "double: ";
    cout << "value = " << *pd << ", address = " << pd << endl;
    cout << "pointer address pd: " << &pd << endl;
    cout << "pt size = " << sizeof (pt);
    cout << ", *pt size = " << sizeof(*pt) << endl;
    cout << "pd size = " << sizeof pd;
    cout << ", *pd size = " << sizeof(*pd) << endl;
    
    return 0;
}
// Output:
/*
 Value of nights = 1001, address = 0x16fdff1ec
 int value = 1001, address = 0x600000004060
 double: value = 1e+07, address = 0x600000004070
 pointer address pd: 0x16fdff1d8
 pt size = 8, *pt size = 4
 pd size = 8, *pd size = 8
 */
