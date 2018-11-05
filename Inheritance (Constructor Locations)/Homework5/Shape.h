#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
using namespace std;

class Shape{
protected:
    unsigned xLocation;
    unsigned yLocation;
    string color; //can be black white or red
public:
    Shape (){
        xLocation = 1;
        yLocation = 1;
        color = "red";
        cout<<"In Base Default Constructor (Shape)"<<endl;
    }
    Shape (unsigned x, unsigned y, string col){
        xLocation = x;
        yLocation = y;
        color = col;
        cout<<"In Base Constructor (Parameters) (Shape)"<<endl;
    }
    ~Shape(){
        cout <<"In Base Destructor (Shape)" << endl;
    }
    unsigned  getXLocation() const { return xLocation; }
    unsigned  getYLocation() const { return yLocation; }
    string getColor() const {return color; }
    Shape(const Shape& shape){
        if(this != &shape){
            xLocation = shape.getXLocation(); 
            yLocation = shape.getYLocation();
            color = shape.getColor();
            cout<<"In Copy Constructor (Shape)"<<endl;
        }
        else cout<<"In Copy Constructor: Self-copying (Shape)"<<endl;
    }
    Shape& operator=(const Shape& shape){
        if(this != &shape){
            xLocation = shape.getXLocation(); 
            yLocation = shape.getYLocation();
            color = shape.getColor();
            cout<<"In Assignment Operator"<<endl;
        }
        else cout<<"In Assignment Operator: Self-copying (Shape)"<<endl;
        return *this;
    }
    virtual float computeArea() const = 0;
    void printColor(){
        cout << color << endl;
    }
};

#endif /* SHAPE_H */