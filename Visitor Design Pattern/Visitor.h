#ifndef VISITOR_H
#define VISITOR_H
class TerminalNode;
class NonTerminalNode;

class Visitor{
public:
    Visitor(){};
    virtual ~Visitor(){};
    virtual void VisitTerminalNode(TerminalNode*)=0;
    virtual void VisitNonTerminalNode(NonTerminalNode*)=0;    
};


#endif /* VISITOR_H */