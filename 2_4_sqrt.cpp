// Using sqrt() function

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    
    double area;
    cout << "Please provide your flat surface area in square meters: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "It is equal to square with side " << side << " meters." << endl;
    cout << "That's amazying!" << endl;

}

// Output:
/*
Please provide your flat surface area in square meters: 76
It is equal to square with side 8.7178 meters.
That's amazying!
*/