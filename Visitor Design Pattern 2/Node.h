#ifndef NODE_H
#define NODE_H
#include "Visitor.h"
#include <string>
using namespace std;

class Node{
protected:
    string m_value;
    Node(string value):m_value(value){}
public:
    virtual ~Node(){};
    virtual void Accept(Visitor*) = 0;    
    
    virtual string getVal() const{
        return m_value;
    }
    virtual void print()=0;
    virtual void setLeftChild(Node* left){}
    virtual void setRightChild(Node* left){}   
};

#endif /* NODE_H */