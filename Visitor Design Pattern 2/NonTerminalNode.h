#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H
#include <vector>
#include"Node.h"
using namespace std;

class NonTerminalNode:public Node{
protected:
    Node* m_leftChild;
    Node* m_rightChild;
public:
    NonTerminalNode(string value):Node(value), m_leftChild(NULL), m_rightChild(NULL){}
    virtual ~NonTerminalNode(){
        if(!m_leftChild) delete m_leftChild;
        if(!m_rightChild) delete m_rightChild;
    }
    void setLeftChild(Node* left){ m_leftChild = left;}
    void setRightChild(Node* left){ m_rightChild = left;}
    
    Node* getLeftChild() const { return m_leftChild;}
    Node* getRightChild() const { return m_rightChild;}  
    
    virtual void print(){
        if(m_leftChild){
            cout<<"(";
            m_leftChild->print();
        }
        cout<<m_value;
        if(m_rightChild){
            m_rightChild->print();
            cout<<")";
        }
    }    
    
    virtual void Accept(Visitor* v) {
        v->VisitNonTerminalNode(this);
    }   
};

#endif /* NONTERMINALNODE_H */