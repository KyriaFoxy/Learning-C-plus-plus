//
//  4_12_assgn_st.cpp
//  Learning C++
//
//  Created by Astryda 'KyriaFoxy' Malinowska on 17/01/2023.
//

// assigning structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    inflatable bouquet =
    {
        "słoneczniki",
        0.20,
        12.49,
    };
    
    inflatable choice;
    
    cout << "bouquet variable: " << bouquet.name << " for ";
    cout << bouquet.price << " PLN." << endl;
    
    choice = bouquet;
    
    cout << "choice variable: " << choice.name << " for ";
    cout << choice.price << " PLN." << endl;
    
    return 0;
}
// Output:
/*
 bouquet variable: słoneczniki for 12.49 PLN.
 choice variable: słoneczniki for 12.49 PLN.
 */
