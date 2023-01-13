// Floating points types and numbers
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); //setting fixed-points
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float milion = 1.0e6;

    cout << "tub = " << tub;
    cout << ", and milion tub = " << milion * tub;
    cout << ",\nand ten milions tub = ";
    cout << 10 * milion * tub << endl;

    cout << "mint = " << mint << ", and milion mint = ";
    cout << milion * mint << endl;

    return 0;
}
// Output:
/*
tub = 3.333333, and milion tub = 3333333.250000,
and ten milions tub = 33333332.000000
mint = 3.333333, and milion mint = 3333333.333333
*/