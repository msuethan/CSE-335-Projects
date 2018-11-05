#ifndef QUEUE_H
#define QUEUE_H
#include <vector>
#include "Doublequeue.h"

class Queue:private Doublequeue{
protected:
    int max;
public:
    Queue(vector<string> dqueue, int given_max):Doublequeue(dqueue){
        max=given_max;
    }
    bool full(){
        return dequeue.size()==max; //for some reason says error in line number
        //little light bulb symbol, but compiles and runs fine when using it.
    }
    void push(string leftstring){insertL(leftstring);};
    string pop(){return removeR();};
};

#endif /* QUEUE_H */

