//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H
#include"PetDatabaseSearchable.h"
#include "PetDatabaseSortableByType.h"

class PetDatabaseSearchableByType:public PetDatabaseSearchable<PetDatabaseSortableByType*>{
protected:
    string m_query;
public:
    using PetDatabaseSearchable<PetDatabaseSortableByType*>::PetDatabaseSearchable;
     
    virtual string getAtt(int i) const override{
        return m_PDS->GetType(i);
    }
    void setQuery(string query){
        m_query = query;
    }
    virtual string getQuery() override{
        return m_query;
    }    
};

#endif /* PETDATABASESEARCHABLEBYTYPE_H */