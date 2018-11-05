#ifndef DOUBLEQUEUE_H
#define DOUBLEQUEUE_H
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

class Doublequeue{
protected:
    vector<string> dequeue;
public:
    Doublequeue(vector<string> dqueue){
        dequeue = dqueue;
    }
    
    void insertL(string leftstring){
        dequeue.insert(dequeue.begin(),1,leftstring);
    }
    void insertR(string rightstring){
        dequeue.insert(dequeue.end(),1,rightstring);
    }
    string removeL(){//void for no return, but string to more easily match output conditions
        string goodbye = dequeue[0];
        dequeue.erase(dequeue.begin());
        return goodbye;
    }
    string removeR(){
        string goodbye = dequeue.back();
        dequeue.erase(dequeue.end());
        return goodbye;
    }
    string getL(){//for stack top
        return dequeue[0];
    }
};

#endif /* DOUBLEQUEUE_H */

