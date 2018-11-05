#ifndef INTEGERVECTORSORTABLESEARCHABLE_H
#define INTEGERVECTORSORTABLESEARCHABLE_H
#include "IntegerVectorSortable.h"
#include "SearchableVector.h"

class IntegerVectorSortableSearchable: public IntegerVectorSortable, public SearchableVector{
protected:
    int m_Query;
public:
    void setQuery(int query){
        m_Query = query;
    }
    int getQuery() override{
        return m_Query;
    }
    int getInteger(int i) const override{
        return IntegerVectorSortable::getInteger(i);
    }    
    unsigned int getSize() const override{
        return IntegerVectorSortable::getSize();
    }    
    virtual bool smaller(int i, int j) const override{
        return IntegerVectorSortable::smaller(i,j);
    }    
};

#endif /* INTEGERVECTORSORTABLESEARCHABLE_H */
