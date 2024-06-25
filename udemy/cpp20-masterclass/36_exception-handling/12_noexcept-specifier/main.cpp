#include <iostream>

class Item
{
    public:
        Item() {}

        void do_something_in_class() const noexcept
        {
            std::cout << "Doing something from class..." << std::endl;

            try
            {
                throw 1;
            }
            catch (int ex)
            {
                // Handle here as rethrowing in noexcept will terminate the program
                std::cout << "Handling exception in Item::do_something_in_class()" << std::endl;
            }
        }
    
    private:
        int m_member_var;
};

void some_function() noexcept
{
    try
    {
        throw 1;
    }
    catch (int ex)
    {
        std::cout << "Handling int exception in free function some_function()" << std::endl;
    }
}

int main()
{
    // Exceptions cannot be propogated out of a noexcept function by any means
    
    try
    {
        some_function();
    }
    catch (int ex)
    {
        std::cout << "Catching rethrown exception in main()" << std::endl;
    }

    std::cout << std::endl;

    Item item;

    try
    {
        item.do_something_in_class();
    }
    catch (int ex)
    {
        std::cout << "Catching exception thrown from method in main()" << std::endl;
    }

    return 0;
}
