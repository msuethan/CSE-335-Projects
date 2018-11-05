//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H
#include"PetDatabaseSearchable.h"
#include "PetDatabaseSortableByWeight.h"

class PetDatabaseSearchableByWeight:public PetDatabaseSearchable<PetDatabaseSortableByWeight*>{
protected:
    unsigned int m_query;
public:
    using PetDatabaseSearchable<PetDatabaseSortableByWeight*>::PetDatabaseSearchable;
    
    virtual string getAtt(int i) const{
        return to_string(m_PDS->GetWeight(i));
    }
    void setQuery(unsigned int query){
        m_query = query;
    }
    virtual string getQuery(){
        return to_string(m_query);
    }    
};

#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */