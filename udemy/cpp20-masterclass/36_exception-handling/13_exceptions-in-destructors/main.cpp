#include <iostream>

class Item
{
    public:
        Item() {}

        // Add noexcept(false) so that exceptions can propagate outside of class
        ~Item() noexcept(false)
        {
            try
            {
                throw 0;
            }
            catch (int ex)
            {
                throw;
            }
        }
};

int main()
{
    try
    {
        Item item;
    } 
    catch (int ex)
    {
        std::cout << "main(): Catching in exception" << std::endl;
    }

    return 0;
}
