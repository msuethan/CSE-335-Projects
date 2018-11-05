#ifndef INTEGERVECTORSORTABLE_H
#define INTEGERVECTORSORTABLE_H
#include <vector>
#include <iostream>
#include "SortableVector.h"
using namespace std;//added this line since it was having trouble identifying vector

class IntegerVectorSortable: public SortableVector {
protected:
    vector <int> m_IntegerVector;
public:    
    unsigned int getSize() const override{//added override keywords for cleanliness
        return m_IntegerVector.size();
    }
    
    bool smaller(int i, int j) const override{
        if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
    }
    
    void swap(int i, int j) override{
        int temp = m_IntegerVector[i];
        m_IntegerVector[i]=m_IntegerVector[j];
        m_IntegerVector[j]=temp;
    }
    
    virtual void print() const {
        for(int i=0; i<getSize(); i++)
            cout<<m_IntegerVector[i]<<"; "<<endl;
    }
    
    int getInteger(int i) const {
        return m_IntegerVector[i];
    }
    
    int insertInteger(int element) {
        m_IntegerVector.push_back(element);
    }
};
#endif /* INTEGERVECTORSORTABLE_H */

