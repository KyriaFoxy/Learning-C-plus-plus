// exceeding integers
#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars, and Sue has " << sue;
    cout << " dollars." << endl
        << "To both account add 1$." << endl << "Now ";
    sam++;
    sue++;
    cout << "Sam has " << sam << " dollars, and Sue has " << sue;
    cout << " dollars.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars, and Sue has " << sue;
    cout << " dollars" << endl;
    cout << "Now, let's take 1$ from both accounts." << endl << "Now ";
    sam--;
    sue--;
    cout << "Sam has " << sam << " dollars, while Sue has " << sue;
    cout << " dollars." << endl << "Lucky Sue!" << endl;

    return 0;
}
// Output:
/*
Sam has 32767 dollars, and Sue has 32767 dollars.
To both account add 1$.
Now Sam has -32768 dollars, and Sue has 32768 dollars.
Poor Sam!
Sam has 0 dollars, and Sue has 0 dollars
Now, let's take 1$ from both accounts.
Now Sam has -1 dollars, while Sue has 65535 dollars.
Lucky Sue!
*/