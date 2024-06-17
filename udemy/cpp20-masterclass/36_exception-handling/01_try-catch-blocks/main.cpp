#include <iostream>
#include <memory>

class Item
{
    public:
        Item()
        {
            std::cout << "Item constructor called." << std::endl;
        }

        ~Item()
        {
            std::cout << "Item destructor called." << std::endl;
        }
};

class MyException
{
    public:
        MyException() = default;
    
        MyException(const MyException &ex);
};

int main()
{
    // Automatic local variables are destroyed when thrown out of a try block
    int a {10};
    int b {10};

    try
    {
        // When exception is thrown, control immediately exists the try block
        Item item;

        if (b == 0)
        {
            throw 110;
        }

        a++;
        b++;

        std::cout << "Code that executes when things are fine." << std::endl;
    }
    catch(int ex)
    {
        std::cout << "Something went wrong. Exception thrown: " << ex << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;
    
    // Throwing pointers is a recipe for disaster... by time of catch block, the memory is already allocated
    
    /*
    int c {0};

    try
    {
        int var {55};
        int *int_ptr = &var;

        if (c == 0)
        {
            throw int_ptr;
        }

        std::cout << "Keep doing some other things..." << std::endl;
    }
    catch (int *ex)
    {
        std::cout << "Something went wrong. Exception thrown: " << *ex << std::endl;
    }
    */

    // Potential memory leaks: the destructor for Item is never called
    /*
    int d {0};

    try
    {
        Item *item_ptr = new Item();

        std::shared_ptr<Item> item_ptr = std::make_shared<Item>();

        if (d == 0)
        {
            throw 0;
        }

        std::cout << "Keep doing some other things..." << std::endl;
    }
    catch (int ex)
    {
        std::cout << "Something went wrong. Exception thrown: " << ex << std::endl;
    }
    */

    // If copy constructor is either deleted, protected, or private, it cannot be thrown as an exception
    try
    {
        MyException e;
        throw e;
    }
    catch (MyException ex)
    {
        
    }

    return 0;
}