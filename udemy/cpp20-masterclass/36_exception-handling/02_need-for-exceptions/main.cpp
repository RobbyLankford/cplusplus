#include <iostream>


class Animal
{
    public:
        Animal() = default;
        
        virtual void breathe() const {};
    
    private:
        std::string m_description;
};

class Dog : public Animal
{
    public:
        Dog() = default;

        virtual void breathe() const override {};

        void run()
        {
            std::cout << "Dog running..." << std::endl;
        }
    
    private:
        std::string m_fur_color;
};


/* Function throws const char * exception when par_b is zero */
void process_parameters(int par_a, int par_b)
{
    if (par_b == 0)
        throw "Potential division by 0 detected";
    
    int result = par_a / par_b;
}


int main()
{
    /* Dividing by zero will cause a crash */
    /*
    const int a {45};
    const int b {0};

    int result = a / b;
    */

    /* Downcast using dynamic_cast with references */

    // The hierarchy of Animal->Dog has to be polymoprhic
    // Throws an exception because animal has no dog part so the cast will not work

    /*
    Animal a;
    Dog &d {dynamic_cast<Dog&>(a)};
    */

    /* Exceptions allow us to recover from errors and give program a chance of continuing */
    
    // Integer division

    /*
    const int a {45};
    const int b {0};
    int result;

    try
    {
        if (b == 0)
            throw 0;
        
        result = a / b;
    }
    catch (std::string ex)
    {
        std::cout << "Something went wrong: " << ex << std::endl;
    }
    catch (int ex)
    {
        std::cout << "Integer division detected: " << ex << std::endl;
    }
    */

    // Exceptions thrown out of other parts of code written
    try
    {
        process_parameters(10, 0);
    }
    catch (const char *ex)
    {
        std::cout << "Exception: " << ex << std::endl;
    }

    return 0;
}