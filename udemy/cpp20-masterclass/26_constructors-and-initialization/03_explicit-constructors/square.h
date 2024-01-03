#ifndef SQUARE_H
#define SQUARE_H

#include <string>

class Square
{
public:
    // Use explicit so that the compiler will not try to implicitly convert to this object
    explicit Square(double side_param , const std::string& color_param = "black");
	~Square();
    double surface() const;
    
private :
    double m_side;
    std::string m_color;
};

#endif