// integers and floating points division
#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integers division: 9 / 5 = " << 9 / 5 << endl;
    cout << "Floating point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0 / 5 = " << 9.0 / 5 << endl;
    cout << "Const double type: 1e7 / 9.0 = " << 1e7 / 9.0 << endl;
    cout << "Const float type: 1e7f / 9.0f = " << 1.e7f / 9.0f << endl; 

    return 0;
}
// Output:
/*
Integers division: 9 / 5 = 1
Floating point division: 9.0 / 5.0 = 1.800000
Mixed division: 9.0 / 5 = 1.800000
Const double type: 1e7 / 9.0 = 1111111.111111
Const float type: 1e7f / 9.0f = 1111111.125000
*/