#include <iostream>

void exception_thrower()
{
    throw 'z';
}

void some_function()
{
    for (size_t i {}; i < 15; i++)
    {
        std::cout << "Iteration: " << i << std::endl;

        try
        {
            // Outer Try Block
            // Exceptions thrown in this scope are handled in outer catch blocks
            if (i == 2)
            {
                throw "exception for int 2 thrown";
            }

            try
            {
                // Inner Try Block
                if (i == 5)
                {
                    // Throw char, handled by inner catch block
                    throw 'd';
                }

                if (i == 7)
                {
                    // Thrown as size_t, handled in outer catch block
                    throw i;
                }

                if (i == 8)
                {
                    exception_thrower();
                }

                if (i == 9)
                {
                    // Inner and outer catch blocks cannot handle it
                    throw std::string("string thrown for int 9");
                }
            }
            catch (char ex)
            {
                std::cout << "Inner catch (char) block: caught thrown for: " << ex << std::endl;
            }
        }
        catch (const char *ex)
        {
            std::cout << "Outer catch (const char*) block, caught: " << ex << std::endl;
        }
        catch (size_t ex)
        {
            std::cout << "Outer catch (size_t) block, caught: " << ex << std::endl;
        }
    }
}

int main()
{
    try
    {
        some_function();
    }
    catch (std::string &ex)
    {
        std::cout << "Main catch block, caught: " << ex << std::endl;
    }

    return 0;
}