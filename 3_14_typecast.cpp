// Forcing type convertion
#include <iostream>

int main()
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coot = " << coots << endl;

    char ch = 'Z';
    cout << "Code for char " << ch << " is ";
    cout << int (ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;

    return 0;
}
// Output:
/*
auks = 31, bats = 30, coot = 30
Code for char Z is 90
Yes, the code is 90
*/