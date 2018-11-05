#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <math.h>

class Circle: public Shape{
protected:
    unsigned radius;
public:
    Circle(unsigned x, unsigned y, string col, unsigned r) : Shape(x,y,col), radius(r){}
    float computeArea() const { return M_PI * radius * radius; }
};


#endif /* CIRCLE_H */

