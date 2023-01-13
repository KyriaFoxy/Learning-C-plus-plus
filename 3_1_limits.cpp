// selected limits of integers - using sizeof operator

#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int contains " << sizeof (int) << " bytes." << endl;
    cout << "short contains " << sizeof (short) << " bytes." << endl;
    cout << "long contains " << sizeof (long) << " bytes." << endl;
    cout << "long long contains " << sizeof (long long) << " bytes." << endl << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    
    cout << "Minimum value for int type: " << INT_MIN << endl;
    cout << "Bits on bytes: " << CHAR_BIT << endl;

    return 0;
}
// Output:
/*
int contains 4 bytes.
short contains 2 bytes.
long contains 8 bytes.
long long contains 8 bytes.

Maximum values:
int: 2147483647
short: 32767
long: 9223372036854775807
long long: 9223372036854775807

Minimum value for int type: -2147483648
Bits on bytes: 8
*/