//Using % operator to convert pounds to stones
#include <iostream>

int main()
{
    using namespace std;
    const int lbs_per_stn = 14;
    int lbs;

    cout << "Input your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / lbs_per_stn;
    int pounds = lbs % lbs_per_stn;
    cout << lbs << " pounds is equal: " << stone << " stones, " << pounds << " pound(s)";
    cout << endl;

    return 0;
}
// Output:
/*
Input your weight in pounds: 190
190 pounds is equal: 13 stones, 8 pound(s)
*/