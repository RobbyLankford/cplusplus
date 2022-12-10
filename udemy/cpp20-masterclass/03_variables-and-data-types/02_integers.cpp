#include <iostream>

int main()
{
    /* Braced Initialization */
    int elephant_count; // No initial value, will contain garbage values
    int lion_count {}; // Initializes to zero
    int dog_count {10}; // Initializes to 10
    int cat_count {15}; // Initializes to 15
    int domesticated_animals {dog_count + cat_count}; // Can initialize using expressions
    // int narrowing_conversion1 {2.9}; // Will not even compile because of type mismatch

    std::cout << "Number 1: " << elephant_count << std::endl;
    std::cout << "Number 2: " << lion_count << std::endl;
    std::cout << "Number 3: " << dog_count << std::endl;
    std::cout << "Number 4: " << cat_count << std::endl;
    std::cout << "Number 5: " << domesticated_animals << std::endl;

    std::cout << "" << std::endl;


    /* Functional Initialization */
    int apple_count (5);
    int orange_count (10);
    int fruit_count (apple_count + orange_count);
    int narrowing_conversion2 (2.9); // This WILL compile (with warnings), but chop off the 0.9

    std::cout << "Number 1: " << apple_count << std::endl;
    std::cout << "Number 2: " << orange_count << std::endl;
    std::cout << "Number 3: " << fruit_count << std::endl;
    std::cout << "Number 4: " << narrowing_conversion2 << std::endl;

    std::cout << "" << std::endl;


    /* Assignment Notation */
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion3 = 2.9; // Again, WILL compile (with warnings), but chop off the 0.9

    std::cout << "Number 1: " << bike_count << std::endl;
    std::cout << "Number 2: " << truck_count << std::endl;
    std::cout << "Number 3: " << vehicle_count << std::endl;
    std::cout << "Number 4: " << narrowing_conversion3 << std::endl;

    std::cout << "" << std::endl;


    /* Find the memory size of an integer */
    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}