#include <iostream>
#include <exception>
#include <chrono>
#include <thread>

void our_terminate_function()
{
    std::cout << "Our custom termination function called." << std::endl;
    std::cout << "Program will terminate in 10s..." << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(10000));

    std::abort();
}

int main()
{
    std::set_terminate(&our_terminate_function);

    throw 1;

    return 0;
}
