//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H
#include"PetDatabaseSearchable.h"
#include "PetDatabaseSortableByPrice.h"

class PetDatabaseSearchableByPrice:public PetDatabaseSearchable<PetDatabaseSortableByPrice*>{
protected:
    double m_query;
public:
    using PetDatabaseSearchable<PetDatabaseSortableByPrice*>::PetDatabaseSearchable;
   
    virtual string getAtt(int i) const override{
        return to_string(m_PDS->GetPrice(i));
    } 
    void setQuery(double query){
        m_query = query;
    }
    virtual string getQuery() override{
        return to_string(m_query);
    }
};

#endif /* PETDATABASESEARCHABLEBYPRICE_H */