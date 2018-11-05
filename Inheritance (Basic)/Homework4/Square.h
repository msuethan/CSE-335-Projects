#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square: public Shape{
protected:
    unsigned length;
public:
    Square(unsigned x, unsigned y, string col, unsigned l) : Shape(x,y,col),length(l){}
    float computeArea() const { return length * length; }
};
#endif /* SQUARE_H */

