#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <math.h>

class Circle: public Shape{
protected:
    unsigned radius;
public:
    Circle() : Shape(){
       radius = 1; 
       cout<<"In Derived Default Constructor (Circle)"<<endl;
    }
    Circle(unsigned x, unsigned y, string col, unsigned r) : Shape(x,y,col), radius(r){
    cout << "In Derived Constructor (Parameters)(Circle)" << endl;
    }
    virtual ~Circle(){
        cout << "In Derived Destructor (Circle)" << endl;
    } 
    Circle( const Circle& circ ) : Shape(circ){
        cout << "In Copy Constructor (Circle)" << endl;
    }
    unsigned getrad() const { return radius; }
    Circle &operator= (const Circle& circ){
        if(this != &circ){
            (Shape&)(*this) = circ;
            radius = circ.getrad();
            cout<<"In Assignment Operator (Circle)"<<endl;
        }
        else cout<<"In Assignment Operator: Self-copying (Circle)"<<endl;
        return *this;        
    }
    float computeArea() const { return M_PI * radius * radius; }
};


#endif /* CIRCLE_H */

