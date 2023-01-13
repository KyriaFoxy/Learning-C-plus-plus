// Using all literal, decima, oct, and hexadecimal
#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "What a figure!\n";
    cout << "Bust size = " << chest << " (42 in decimal)\n";
    cout << "Waist = " << waist << " (0x42 in hexadecimal)\n";
    cout << "Pantleg length = " << inseam << " (042 in oct)\n";

    return 0;
}
// Output:
/*
What a figure!
Bust size = 42 (42 in decimal)
Waist = 66 (0x42 in hexadecimal)
Pantleg lenght = 34 (042 in oct)
*/