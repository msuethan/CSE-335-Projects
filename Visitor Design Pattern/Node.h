#ifndef NODE_H
#define NODE_H
#include "Visitor.h"

class Node{
protected:
    int m_val;
    Node(int val):m_val(val){}
public:
    virtual ~Node(){};
    virtual void Accept(Visitor*) = 0;    
    
    virtual int getVal() const{
        return m_val;
    }
};

#endif /* NODE_H */