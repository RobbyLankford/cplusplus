#include <iostream>

/* Namespaces can be used to use functions with the same names */

const double adjustment {0.724};

// Declare a namespace with `namespace` and define functions inside
namespace No_Adjust
{
    double add(double x, double y)
    {
        return x + y;
    }
}

namespace Adjust
{
    double add(double x, double y)
    {
        return x + y - adjustment;
    }
}

// Can declare the same namespace more than once and add more functions
namespace No_Adjust
{
    // Can just declare prototype and define the body later
    double mult(double x, double y);
    double div(double x, double y);
}

namespace Adjust
{
    double mult(double x, double y);
    double div(double x, double y);
}


int main()
{
    // Access function from a namespace using <namespace>::<function>
    double result = No_Adjust::div(12, 3);

    std::cout << "result: " << result << std::endl;

    return 0;
}


namespace No_Adjust
{
    double mult(double x, double y)
    {
        return x * y;
    }

    double div(double x, double y)
    {
        return x / y;
    }
}

namespace Adjust
{
    double mult(double x, double y)
    {
        return x * y - adjustment;
    }

    double div(double x, double y)
    {
        return x / y - adjustment;
    }
}
