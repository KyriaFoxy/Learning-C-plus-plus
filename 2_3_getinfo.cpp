// Operating on input and output

#include <iostream>

int main()
{
    using namespace std;

    int pizza;

    cout << "How many pizza slices do you have?" << endl;
    cin >> pizza;
    cout << "Here, take two more. ";
    pizza = pizza + 2;
    cout << "Now you have " << pizza << " slices of delicious pizza c:" << endl;

    return 0;
}

// Output:
/*
How many pizza slices do you have?
42
Here, take two more. Now you have 44 slices of delicious pizza c:
*/