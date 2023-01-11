// Tasks from the end of chapter 2 - output is stored at the end of this file
#include <iostream>
void entliczek(void);
void czerwony(void);
double conv_lightyears(double);
void current_time(int, int);

int main()
{
    // 1 - print name and surname of the author (may be fictional)
    std::cout << "Astryda " << "Malinowska." << std::endl;
    std::cout << std::endl;

    // 2. asking about sea miles and convering it to meters
    std::cout << "Please provide sea mile to convert: ";
    int mile;
    std::cin >> mile;
    int one_mile_to_meters = 1852;
    int meters = mile * one_mile_to_meters;
    std::cout << mile << " sea miles is equal to " << meters << " meters." << std::endl;
    std::cout << std::endl;

    // 3. - using two functions
    entliczek();
    entliczek();
    czerwony();
    czerwony();
    std::cout << std::endl;

    // 4 - asking for age, then converting to months
    std::cout << "Please provide your age: ";
    int age;
    std::cin >> age;
    int age_to_months = age * 12;
    std::cout << "Your age in months is euqal: " << age_to_months << std::endl;
    std::cout << std::endl;

    // 5 - asking for temperature in c, then converting to fahrenheit
    std::cout << "Provide temperature in Celsius degree: ";
    int celsius;
    std::cin >> celsius;
    int fahrenheit = 1.8 * celsius + 32.0;
    std::cout << "So, " << celsius << " celsius degree are equal to ";
    std::cout << fahrenheit << " fahrenheit degree." << std::endl;
    std::cout << std::endl;

    // 6 - converting lightyear to astronomical units
    std::cout << "Provide number of lightyears: ";
    double lightyears;
    std::cin >> lightyears;
    double astrounits = conv_lightyears(lightyears);
    std::cout << lightyears << " lightyears = " << astrounits << " astronomical units." << std::endl;
    std::cout << std::endl;

    // 7 - taking hours and minutes and displaying by function
    std::cout << "Provide current hour: ";
    int hour;
    std::cin >> hour;
    std::cout << "Provide minutes: ";
    int minutes;
    std::cin >> minutes;
    current_time(hour, minutes);

    return 0;
}

void entliczek(void)
{
    std::cout << "Etnliczek pentliczek" << std::endl;
}

void czerwony(void)
{
    std::cout << "Czerwony stoliczek" << std::endl;
}

double conv_lightyears(double light)
{
    int astrounit = 63240 * light;
    return astrounit;
}

void current_time(int hour, int minutes)
{
    std::cout << "Current time: " << hour << ":" << minutes << std::endl;
}

// Output:
/*
Astryda Malinowska.

Please provide sea mile to convert: 20
20 sea miles is equal to 37040 meters.

Etnliczek pentliczek
Etnliczek pentliczek
Czerwony stoliczek
Czerwony stoliczek

Please provide your age: 30
Your age in months is euqal: 360

Provide temperature in Celsius degree: 4
So, 4 celsius degree are equal to 39 fahrenheit degree.

Provide number of lightyears: 4.2
4.2 lightyears = 265608 astronomical units.

Provide current hour: 23
Provide minutes: 54
Current time: 23:54
*/