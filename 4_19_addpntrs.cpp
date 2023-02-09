#include <iostream>


int main(int argc, const char * argv[])
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    
    double * pw = wages;
    short * ps = &stacks[0];
    
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw++;
    cout << "dodaj do wskaźnika pw 1:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;
    
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps++;
    cout << "dodaj do wskaźnika ps 1:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;
    
    cout << "Dostęp do dwóch elementów, zapis tablicowy:\n";
    cout << "stacks[0] = " << stacks[0]
    << ", stacks[1] = " << stacks[1] << endl;
    cout << "Dostęp do dwóch elementów, zapis wskaźnikowy\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = wielkość tablicy wages\n";
    cout << sizeof(pw) << " = wielkość wskaźnika pw\n";
    
    return 0;
}
// Output:
/*
 pw = 0x16fdff1d0, *pw = 10000
 dodaj do wskaźnika pw 1:
 pw = 0x16fdff1d8, *pw = 20000

 ps = 0x16fdff1b8, *ps = 3
 dodaj do wskaźnika ps 1:
 ps = 0x16fdff1ba, *ps = 2

 Dostęp do dwóch elementów, zapis tablicowy:
 stacks[0] = 3, stacks[1] = 2
 Dostęp do dwóch elementów, zapis wskaźnikowy
 *stacks = 3, *(stacks + 1) = 2
 24 = wielkość tablicy wages
 8 = wielkość wskaźnika pw
 */