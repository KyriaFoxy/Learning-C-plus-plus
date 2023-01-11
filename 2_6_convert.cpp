// Converting stones to pounds and kilograms

#include <iostream>
int stonetolb(int);
double stonetokg(double);

int main()
{
    using namespace std;

    int stone;
    cout << "Provide your weight in stones: ";
    cin >> stone;
    cout << "Do you want to convert your stone weight to pounds(1) or kilograms(2)?" << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
        int pounds = stonetolb(stone);
        cout << stone << " stones = ";
        cout << pounds << " pounds." << endl;
    }
    else if (x == 2)
    {
        double kilograms = stonetokg(stone);
        cout << stone << " stones = ";
        cout << kilograms << " kilograms." << endl;
    }
    else
    {
        cout << "Sorry, provided wrong number." << endl;
    }
}

int stonetolb(int sts)
{
    int pounds = 14 * sts;
    return pounds;
}

double stonetokg(double stk)
{
    double kilograms = 6.5 * stk;
    return kilograms;
}

// Output:
// with 1st option:
/*
Provide your weight in stones: 9
Do you want to convert your stone weight to pounds(1) or kilograms(2)?
1
9 stones = 126 pounds.
*/

// with 2nd option:
/*
Provide your weight in stones: 13
Do you want to convert your stone weight to pounds(1) or kilograms(2)?
2
13 stones = 84.5 kilograms.
*/