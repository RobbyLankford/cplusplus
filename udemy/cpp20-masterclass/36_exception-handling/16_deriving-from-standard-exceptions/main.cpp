#include <iostream>
#include <exception>
#include <cstring>

class DivideByZeroException : public std::exception
{
    public:
        DivideByZeroException(int a, int b) noexcept : std::exception(), m_a(a), m_b(b) {}

        virtual const char *what() const noexcept override
        {
            return "Divide by Zero detected.";
        }

        int get_a() const
        {
            return m_a;
        }

        int get_b() const
        {
            return m_b;
        }
    
    private:
        int m_a {};
        int m_b {};
};

int divide(int a, int b)
{
    if (b == 0)
        throw DivideByZeroException(a, b);
    
    return a / b;
}

int main()
{
    try
    {
        divide(10, 0);
    }
    catch(std::exception &ex)
    {
        DivideByZeroException *d_z = dynamic_cast<DivideByZeroException*>(&ex);

        if (d_z)
        {
            std::cout << ex.what() << ": dividing " << d_z->get_a() << " by " << d_z->get_b() << std::endl;
        }
    }

    return 0;
}
