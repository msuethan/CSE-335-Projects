//Author: Ethan Lee

#include <cstdlib>
#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include<vector>

using namespace std;

int main(int argc, char** argv) {
    
{Square square1;} //instantiate as variable
//deleted after due to {} position, otherwise deleted at end
    
Square* square2 = new Square(2,2,"black",2);//instantiate using new
delete square2;

Circle circ1;//instantiate as variable
//deleted at the end since not in block

Circle* circ2 = new Circle(2,2,"black",2);//instantiate using new
delete circ2;


    return 0;
}

