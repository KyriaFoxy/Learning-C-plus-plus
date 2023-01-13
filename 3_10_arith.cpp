// Arithmetic in C++
#include <iostream>

int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point)
    cout << "Provide a number: ";
    cin >> hats;
    cout << "Provide a second number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return 0;
}
// Output:
/*
Provide a number: 54.32
Provide a second number: 98.43
hats = 54.320000; heads = 98.430000
hats + heads = 152.750000
hats - heads = -44.110001
hats * heads = 5346.717773
hats / heads = 0.551864
*/