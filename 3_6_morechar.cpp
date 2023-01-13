//Type char and type int
#include <iostream>

int main()
{
    using namespace std;

    char ch = 'M';
    int i = ch;
    cout << "ASCII code for char " << ch << " is " << i << endl;

    cout << "Let add 1 to char code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "ASCII code for char " << ch << " is " << i << endl;

    //using cout.put() method to print char
    cout << "Printing char ch with cout.put(ch): ";
    cout.put(ch);

    //using cout.put() for displaying char constant:
    cout.put('!');

    cout << endl << "Done!" << endl;

    return 0;

}
// Output:
/*
ASCII code for char M is 77
Let add 1 to char code:
ASCII code for char N is 78
Printing char ch with cout.put(ch): N!
Done!
*/