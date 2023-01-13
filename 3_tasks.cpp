// Tasks from chapter 3.
#include <iostream>

int main()
{
    // 1. Asking about height in cm and converting into inches
    const double cm_to_inch = 30.48;
    std::cout << "Hello, there! please input your height in cm: ";
    int height_cm;
    std::cin >> height_cm;
    double height_inch = height_cm * cm_to_inch;
    std::cout << "Ok, so your height in cm is equal to: ";
    std::cout << height_cm << " cm, and your height in inches is equal to: ";
    std::cout << height_inch << " inches. How nice!" << std::endl << std::endl;

    // 2. Calculatin BMI
    double height, weight;
    std::cout << "Hello, there! Please input your height (in cm) and weight (in kg): ";
    std::cin >> height;
    std::cin >> weight;
    double bmi = (weight / (height * height)) * 10000;
    std::cout << "So, your BMI is equal to: " << bmi << std::endl << std::endl;

    // 5. counting percentage of population
    std::cout << "Provide number of people on the wole world: ";
    long double population;
    std::cin >> population;
    std::cout << "Input number of people in Poland: ";
    long double population_in_poland;
    std::cin >> population_in_poland;
    long double percent_of_whole = (population_in_poland * 100) / population;
    std::cout << "Population of Poland is only " << percent_of_whole << "% of whole world population.";

    return 0;
}