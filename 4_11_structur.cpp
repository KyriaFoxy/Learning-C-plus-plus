//
//  4_11_structur.cpp
//  Learning C++
//
//  Created by Astryda KyriaFoxy Malinowska on 17/01/2023.
//

// Using structures example with structures fiels
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99,
    };
    
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99,
    };
    
    cout << "Please add to your guest list: " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both of them for ";
    cout << guest.price + pal.price << " PLN!\n";
    
    return 0;
}
// Output:
/*
 Please add to your guest list: Glorious Gloria and Audacious Arthur!
 You can have both of them for 62.98 PLN!
 */
