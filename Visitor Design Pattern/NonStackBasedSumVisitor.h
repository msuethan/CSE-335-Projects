#ifndef NONSTACKBASEDSUMVISITOR_H
#define NONSTACKBASEDSUMVISITOR_H

#include "Visitor.h"
#include "Node.h"

class NonStackBasedSumVisitor: public Visitor{
protected:
    unsigned int sum;
public:
    NonStackBasedSumVisitor(){
        sum=0;
    };
    virtual ~NonStackBasedSumVisitor(){};  
    
    virtual void VisitTerminalNode(TerminalNode* TerminalNode){
        sum+=TerminalNode->getVal();
    }   
    virtual void VisitNonTerminalNode(NonTerminalNode* ntn){
        sum += ntn->getVal(); 
        for(int i=0; i< ntn->getChildrenSize(); i++){
            ntn->getChild(i)->Accept(this);
        }	
    };    
    unsigned int getResult() {
        unsigned int result = sum;
        sum = 0;
        return result;
    }    
private:
    NonStackBasedSumVisitor(const NonStackBasedSumVisitor& orig){};
};

#endif /* NONSTACKBASEDSUMVISITOR_H */