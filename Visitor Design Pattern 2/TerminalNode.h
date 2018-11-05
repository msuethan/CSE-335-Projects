#ifndef TERMINALNODE_H
#define TERMINALNODE_H
#include"Node.h"

class TerminalNode:public Node{
public:
    TerminalNode(string value):Node(value){}
    virtual ~TerminalNode(){};
    virtual void Accept(Visitor* v) {
        v->VisitTerminalNode(this);
    }    
    virtual void print(){     
        cout<<m_value;
    }     
};

#endif /* TERMINALNODE_H */