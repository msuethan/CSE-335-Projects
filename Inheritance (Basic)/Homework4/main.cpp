//Author: Ethan Lee

#include <cstdlib>
#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include<vector>

using namespace std;

int main(int argc, char** argv) {
    
vector<Shape*> myShapes;

Square* square1 = new Square(1,1,"black",1);
Square* square2 = new Square(2,2,"red",2);
Square* square3 = new Square(3,3,"white",3);
Square* square4 = new Square(4,4,"white",4);
Circle* circ1 = new Circle(5,5,"black",1);
Circle* circ2 = new Circle(6,6,"red",2);

myShapes.push_back(square1);
myShapes.push_back(square2);
myShapes.push_back(square3);
myShapes.push_back(square4);
myShapes.push_back(circ1);
myShapes.push_back(circ2);

for (int i=0; i<myShapes.size(); i++){
    cout << myShapes[i]-> computeArea() << ", ";
    myShapes[i] ->  printColor();
}
    return 0;
}

