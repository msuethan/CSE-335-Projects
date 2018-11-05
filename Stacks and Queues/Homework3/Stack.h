#ifndef STACK_H
#define STACK_H
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Doublequeue.h"
using namespace std;

class Stack: private Doublequeue{
public:
    Stack(vector<string> dqueue):Doublequeue(dqueue){
    }
    void push(string leftstring){insertL(leftstring);};
    string pop(){return removeL();};
    string top(){return getL();};
};

#endif /* STACK_H */

