//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESORTABLEBYTYPE_H
#define PETDATABASESORTABLEBYTYPE_H
#include"PetDatabaseSortable.h"

class PetDatabaseSortableByType:public PetDatabaseSortable{
public:
    PetDatabaseSortableByType(vector<Pet*> pets):PetDatabaseSortable(pets){}
 
    virtual bool smaller(int i, int j) const override{
        if(m_Pets[i]->getType() < m_Pets[j]->getType())
            return true;
        else
            return false;
    }       
    string GetType (int i){
        return m_Pets[i]->getType();
    }
};

#endif /* PETDATABASESORTABLEBYTYPE_H */