//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESEARCHABLEBYNAME_H
#define PETDATABASESEARCHABLEBYNAME_H
#include"PetDatabaseSearchable.h"
#include "PetDatabaseSortableByName.h"

class PetDatabaseSearchableByName:public PetDatabaseSearchable<PetDatabaseSortableByName*>{
protected:
    string m_query;
public:
    using PetDatabaseSearchable<PetDatabaseSortableByName*>::PetDatabaseSearchable;
  
    virtual string getAtt(int i) const override{
        return m_PDS->GetName(i);
    } 
    void setQuery(string query){
        m_query = query;
    }
    virtual string getQuery() override{
        return m_query;
    }    
};

#endif /* PETDATABASESEARCHABLEBYNAME_H */