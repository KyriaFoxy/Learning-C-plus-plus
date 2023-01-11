// Program operating on meal
// presents how to use variables

#include <iostream>

int main()
{
    using namespace std;

    int pizza;

    pizza = 25;
    cout << "I have ";
    cout << pizza;
    cout << " slices of pizza.";
    cout << endl;
    pizza = pizza - 1;
    cout << "Chrum, chrum. Now I have " << pizza << " slices of delicious pizza." << endl;

    return 0;
}

// Output:
/*
I have 25 slices of pizza.
Chrum, chrum. Now I have 24 slices of delicious pizza.
*/