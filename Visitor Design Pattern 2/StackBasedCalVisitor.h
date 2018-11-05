#ifndef STACKBASEDCALVISITOR_H
#define STACKBASEDCALVISITOR_H
#include "Visitor.h"
#include "Node.h"
#include <stack>
#include <sstream> 
using namespace std;

class StackBasedCalVisitor: public Visitor{
public:
    stack<float> m_stack;
public:
    StackBasedCalVisitor(){};
    virtual ~StackBasedCalVisitor(){};
    
    virtual void VisitTerminalNode(TerminalNode* TerminalNode){
        istringstream iss (TerminalNode->getVal());
        float val;
        iss >> val;
        m_stack.push(val);
    }
    virtual void VisitNonTerminalNode(NonTerminalNode*ntn){
        string op = ntn->getVal(); 

        ntn->getLeftChild()->Accept(this);
        ntn->getRightChild()->Accept(this);

        float recent = m_stack.top();
        m_stack.pop();

        if(op == "+"){
            recent += m_stack.top();
            m_stack.pop();
        }
        else if(op == "-"){        
            recent = m_stack.top()- recent;
            m_stack.pop();
        }
        else if(op == "*"){
            recent = recent * m_stack.top();
            m_stack.pop();
        }   
        else if(op == "/"){
            recent = m_stack.top()/recent;
            m_stack.pop();
        }          
        m_stack.push(recent);
    };   
    float getResult() {
        float result = m_stack.top();
        m_stack.pop();
        return result;
    }    
private:
    StackBasedCalVisitor(const StackBasedCalVisitor& orig){};
};

#endif /* STACKBASEDCALVISITOR_H */