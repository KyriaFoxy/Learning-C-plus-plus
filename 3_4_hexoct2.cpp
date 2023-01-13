// Printing numbers in oct and hexadecimal
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "What a figure!" << endl;
    cout << "Bust size = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "Waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "Pantleg length = " << inseam << " (oct for 42)" << endl;

    return 0;
}