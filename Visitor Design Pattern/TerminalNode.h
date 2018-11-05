#ifndef TERMINALNODE_H
#define TERMINALNODE_H
#include"Node.h"

class TerminalNode:public Node{
public:
    TerminalNode(int val):Node(val){}
    virtual ~TerminalNode(){};
    virtual void Accept(Visitor* v) {
        v->VisitTerminalNode(this);
    }    
};

#endif /* TERMINALNODE_H */