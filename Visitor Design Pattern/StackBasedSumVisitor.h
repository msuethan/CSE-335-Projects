#ifndef STACKBASEDSUMVISITOR_H
#define STACKBASEDSUMVISITOR_H
#include "Visitor.h"
#include "Node.h"
#include <stack>
using namespace std;

class StackBasedSumVisitor: public Visitor{
public:
    stack<unsigned int> m_stack;
public:
    StackBasedSumVisitor(){};
    virtual ~StackBasedSumVisitor(){};
    
    virtual void VisitTerminalNode(TerminalNode* TerminalNode){
        m_stack.push(TerminalNode->getVal());
    }
    
    virtual void VisitNonTerminalNode(NonTerminalNode*ntn){
        unsigned int sum = ntn->getVal(); 
        for(int i=0; i< ntn->getChildrenSize(); i++){
            ntn->getChild(i)->Accept(this);
        }
        for( int i=0; i<ntn->getChildrenSize(); i++ ){
            sum += m_stack.top();
            m_stack.pop();
        }		
        m_stack.push(sum);	
    };   
    unsigned int getResult() {
        unsigned int result = m_stack.top();
        m_stack.pop();
        return result;
    }    
private:
    StackBasedSumVisitor(const StackBasedSumVisitor& orig){};
};

#endif /* STACKBASEDSUMVISITOR_H */