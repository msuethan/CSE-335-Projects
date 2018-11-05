#ifndef INTEGERVECTORSEARCHABLE_H
#define INTEGERVECTORSEARCHABLE_H
#include <vector>
#include <iostream>
#include "SearchableVector.h"

class IntegerVectorSearchable: public SearchableVector {
protected:
    vector <int> m_IntegerVector;
    int m_Query;
public:    
    virtual unsigned int getSize() const {
        return m_IntegerVector.size();
    }
    virtual bool smaller(int i, int j) const {
        cout << "FUCKER";
        if(i < j)
            return true;
        else
            return false;
    }
    virtual void print() const {
        for(int i=0; i<getSize(); i++)
            cout<<m_IntegerVector[i]<<"; ";
        cout<<endl;
    }
    int getInteger(int i) const{
        return m_IntegerVector[i];
    }
    int insertInteger(int element) {
        m_IntegerVector.push_back(element);
    }
    int setQuery(int query){
        m_Query = query;
    }
    int getQuery(){
        return m_Query;
    }
    
};

#endif /* INTEGERVECTORSEARCHABLE_H */