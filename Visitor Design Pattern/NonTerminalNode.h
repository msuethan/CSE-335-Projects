#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H
#include <vector>
#include"Node.h"
using namespace std;

class NonTerminalNode:public Node{
protected:
    vector<Node*> m_nodes;
public:
    NonTerminalNode(int val):Node(val){}
    virtual ~NonTerminalNode(){};
    
    void addChild(Node* node){
        m_nodes.push_back(node);
        
    }
    virtual Node* getChild(int i) const{
        return m_nodes[i];
    };
    
    virtual unsigned int getChildrenSize() const{
        return m_nodes.size();
    };    
    virtual void Accept(Visitor* v) {
        v->VisitNonTerminalNode(this);
    }   
};

#endif /* NONTERMINALNODE_H */