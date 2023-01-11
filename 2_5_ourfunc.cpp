// Defining own function

#include <iostream>
void asta(int); //prototype for own function

int main()
{
    using namespace std;

    asta(3);
    cout << "Input integer: ";
    int count;
    cin >> count;
    asta(count);
    cout << "Done!" << endl;
    
    return 0;
}

void asta(int t)
{
    std::cout << "Asta asks you, to touch your feet fingers " << t << " times." << std::endl;
}

// Output:
/*
Asta asks you, to touch your feet fingers 3 times.
Input integer: 34
Asta asks you, to touch your feet fingers 34 times.
Done!
*/