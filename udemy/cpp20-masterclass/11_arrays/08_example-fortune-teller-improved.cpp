#include <iostream>
#include <ctime>

int main()
{
    // Another simple application of arrays and randomness to generate fortunes
    std::srand(std::time(0));

    bool end {false};

    const int max_length {15};
    char name[max_length] {};

    char predictions [][90] {
        "a lot of kids running in the backyard.",
        "a lot of empty cans on your work table.",
        "you partying too much with kids wearing weird clothes.",
        "you running away from something really scary.",
        "clouds gathering in the sky and an army standing ready for war.",
        "dogs running around in a deserted city.",
        "a lot of cars stuck in a terrible traffic jam.",
        "you sitting in the dark typing many lines of code.",
        "you laughing your lungs out.",
        "... hmm, I do not see anything."
    };

    std::cout << "What is your name?" << std::endl;
    std::cin.getline(name, max_length);
    
    while (!end)
    {
        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

        std::cout << "Oh dear " << name << ", I see ";
        std::cout << predictions[rand_num] << std::endl;

        std::cout << std::endl;
        std::cout << "Do you want me to try again? (Y | N): ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << std::endl;
    std::cout << "That is all I have for you today." << std::endl;

    return 0;
}