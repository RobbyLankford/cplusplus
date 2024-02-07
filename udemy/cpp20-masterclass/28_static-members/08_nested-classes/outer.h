#ifndef OUTER_H
#define OUTER_H

#include <iostream>

class Outer
{
    public:
        Outer(int int_param, double double_param);
        Outer();
        ~Outer();

        void do_something()
        {
            Inner inner1 (10.0);
            inner1.do_something_with_outer(this);
        }
    
    private:
        int m_var1;
        double m_var2;
        inline static int static_int {45};

        // Create class within another class
        class Inner
        {
            public:
                Inner(double double_param);
                
                double get_double() const
                {
                    // Accessing private parts of Outer
                    std::cout << "static_int: " << static_int << std::endl;

                    return inner_var;
                }

                void do_something_with_outer(Outer *outer)
                {
                    std::cout << "This is inner accessing private part of Outer object, m_var1: " <<
                        outer->m_var1 << std::endl;
                }
            
            private:
                double inner_var;
        };
};

#endif