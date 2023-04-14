#include <iostream>
#include <ctime>

int main()
{
    // A simple application of arrays and randomness to generate fortunes
    std::srand(std::time(0));

    const int max_length {15};

    char prediction0[] { "a lot of kids running in the backyard." };
    char prediction1[] { "a lot of empty cans on your work table." };
    char prediction2[] { "you partying too much with kids wearing weird clothes." };
    char prediction3[] { "you running away from something really scary." };
    char prediction4[] { "clouds gathering in the sky and an army standing ready for war." };
    char prediction5[] { "dogs running around in a deserted city." };
    char prediction6[] { "a lot of cars stuck in a terrible traffic jam." };
    char prediction7[] { "you sitting in the dark typing many lines of code." };
    char prediction8[] { "you laughing your lungs out." };

    bool end { false };
    char name[max_length] {};

    std::cout << "What is your name?" << std::endl;
    std::cin.getline(name, max_length);

    while (!end)
    {
        size_t random_num = static_cast<size_t>((std::rand() % 10));

        std::cout << "Oh dear " << name << ", I see ";

        switch (random_num)
        {
            case 0:
                std::cout << prediction0 << std::endl;
                break;
            case 1:
                std::cout << prediction1 << std::endl;
                break;
            case 2:
                std::cout << prediction2 << std::endl;
                break;
            case 3:
                std::cout << prediction3 << std::endl;
                break;
            case 4:
                std::cout << prediction4 << std::endl;
                break;
            case 5:
                std::cout << prediction5 << std::endl;
                break;
            case 6:
                std::cout << prediction6 << std::endl;
                break;
            case 7:
                std::cout << prediction7 << std::endl;
                break;
            case 8:
                std::cout << prediction8 << std::endl;
                break;
            default:
                std::cout << "... hmm, I do not see anything." << std::endl;
        }

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