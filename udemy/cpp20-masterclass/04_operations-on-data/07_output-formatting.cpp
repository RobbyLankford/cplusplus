#include <iostream>
#include <iomanip>
#include <ios>
#include <ostream>

int main()
{
    // std::endl : places a new line '\n' character on the output stream
    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    std::cout << "\n-------\n" << std::endl;

    // std::flush : forces output to the terminal at the point this command is called
    std::cout << "This is a nice message..." << std::endl << std::flush;

    std::cout << "\n-------\n" << std::endl;

    // std::setw : sets the width of the output for nice formatting
    std::cout << "Unformated table: " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;

    std::cout << "Formatted table: " << std::endl;
    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout << std::endl;

    int col_width {14};

    std::cout << "Formatted table with variables: " << std::endl;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Justification of text: std::right, std::left, or std::internal
    col_width = 20;

    
    std::cout << "Right justified table(default): " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

    std::cout << std::endl;

    std::cout << "Left justified table: " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

    std::cout << std::endl;

    std::cout << "Internal justified table: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::setfill : sets the character used in empty spaces
    col_width = 20;

    std::cout << "Table with fill characters : " << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('*');
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2) << "29" << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::boolalpha and std::noboolalpha : controls if bools are printed as true/false or 1/0
    bool condition {true};
    bool other_condition {false};

    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    
    std::cout << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;

    std::cout << "\n-------\n" << std::endl;
    
    // std::showpos and std::noshowpos : controls if `+` is shown for positive numbers
    int pos_num {34};
    int neg_num {-45};
    
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;
    
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl; 

    std::cout << std::endl;

    std::cout << std::noshowpos;
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::dec, std::hex, and std::oct : controls the base numbering systems used
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    std::cout << std::endl;

    std::cout << "default base format: " << std::endl;
    std::cout << "pos_int: " << pos_int << std::endl;
    std::cout << "neg_int: " << neg_int << std::endl;
    std::cout << "double_var: " << double_var << std::endl;
    
    std::cout << std::endl;

    std::cout << "pos_int in different bases: " << std::endl;
    std::cout << "pos_int (dec): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;

    std::cout << "neg_int in different bases: " << std::endl;
    std::cout << "neg_int (dec): " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_int << std::endl;
    
    std::cout << std::endl;

    std::cout << "double_var in different bases: " << std::endl;
    std::cout << "double_var (dec): " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex): " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct): " << std::oct << double_var << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::uppercase : force output letters to uppercase
    pos_int = 717171;
    
    std::cout << "pos_int (nouppercase: default): " << std::endl;
    std::cout << "pos_int (dec): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;

    std::cout << "pos_int (uppercase): " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::fixed and std::scientific : controls how decimals are printed
    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};
    
    std::cout << "double values (default: use scientific where necessary): " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "double values (fixed): " << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "double values (scientific): " << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;

    // A hacky way to set back to the default way of printing floating points
    std::cout << "double values (back to defaults): " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::setprecision : sets precision with which decimals are printed
    a = 3.1415926535897932384626433832795;
    
    std::cout << std::endl;
    std::cout << "a (default precision(6)): " << a << std::endl;

    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)): " << a << std::endl;
    
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)): " << a << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // std::showpoint : forces trailing zeros to be shown
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {45};
    
    std::cout << std::endl;
    
    std::cout << "noshowpoint (default): " << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    
    std::cout << std::endl;

    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;

    return 0;
}