//I had to check, if uninitialized variable contains random value - and it is true

#include <iostream>

int main()
{
    int x;
    std::cout << x << std::endl;

    int y = {355};
    std::cout << y << std::endl;

    // int z = {};
    // std::cout << z << std::endl;

    return 0;
}

// Output:
/*
80223360
355
*/