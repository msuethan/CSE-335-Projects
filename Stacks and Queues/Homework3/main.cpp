//Author: Ethan Lee

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Doublequeue.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main(int argc, char** argv) {
    vector<string> v;
    Doublequeue test(v);
    test.insertL("string1");
    test.insertL("string2");
    test.insertL("string3");
    test.insertL("string4");
    test.insertL("string5");
    test.insertR("string6");
    test.insertR("string7");
    test.insertR("string8");
    for(int i=0;i<8;i++){
        cout << test.removeL() << endl;
    }
    
   Stack teststack(v);
   teststack.push("string100");
   teststack.push("string200");
   teststack.push("string300");
   //cout << "top: " << teststack.top() << endl; //test for top in Stack class
   teststack.push("string400");
   for(int i=0;i<4;i++){
       cout << teststack.pop() << endl;
   }
    
    Queue testQueue(v,4);
    testQueue.push("string10");
    testQueue.push("string20");
    testQueue.push("string30");
    //cout << "full? " << testQueue.full() << endl; //test for full in Queue class
    testQueue.push("string40");
    //cout << "full? " << testQueue.full() << endl; //test for full in Queue class
    for(int i=0;i<4;i++){
        cout << testQueue.pop() << endl;
    }
    
    return 0;
}

