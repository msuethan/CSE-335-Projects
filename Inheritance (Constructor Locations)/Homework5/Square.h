#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square: public Shape{
protected:
    unsigned length;
public:
    Square() : Shape(){
        length = 1;
        cout<<"In Derived Default Constructor (Square)"<<endl;
    }
    Square(unsigned x, unsigned y, string col, unsigned l) : Shape(x,y,col),length(l){
    cout << "In Derived Constructor (Parameters)(Square)" << endl;
    }
    virtual ~Square(){
        cout << "In Derived Destructor (Square)" << endl;
    } 
    Square( const Square& sq ) : Shape(sq){
        cout << "In Copy Constructor (Square)" << endl;
    }
    unsigned getlen() const { return length; }
    Square &operator= (const Square& sq){
        if(this != &sq){
            (Shape&)(*this) = sq;
            length = sq.getlen();
            cout<<"In Assignment Operator (Square)"<<endl;
        }
        else cout<<"In Assignment Operator: Self-copying (Square)"<<endl;
        return *this;        
    }    
    float computeArea() const { return length * length; }
};
#endif /* SQUARE_H */

