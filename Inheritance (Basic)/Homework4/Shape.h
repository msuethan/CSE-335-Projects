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
    Shape (unsigned x, unsigned y, string col){
        xLocation = x;
        yLocation = y;
        color = col;
    }
    Shape (){
        xLocation = 1;
        yLocation = 1;
        color = "red";
    }
    //unsigned  getXLocation() const { return xLocation; }
    //unsigned  getYLocation() const { return yLocation; }
    virtual float computeArea() const = 0;
    void printColor(){
        cout << color << endl;
    }
};





#endif /* SHAPE_H */

