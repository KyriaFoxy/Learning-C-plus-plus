// Using special characters
#include <iostream>

int main()
{
    using namespace std;

    cout << "\aOperation \"HyperHype\" was launched!\n";
    cout << "Provide you agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "You provided " << code << "...\n";
    cout << "Provided code is correct! Execute plan Z3!\n";

    return 0;
}
// Output:
/*
Operation "HyperHype" was launched!
Provide you agent code:32459684
You provided 32459684...
Provided code is correct! Execute plan Z3!
*/