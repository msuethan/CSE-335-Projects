//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESORTABLEBYWEIGHT_H
#define PETDATABASESORTABLEBYWEIGHT_H
#include"PetDatabaseSortable.h"

class PetDatabaseSortableByWeight:public PetDatabaseSortable{
public:
    PetDatabaseSortableByWeight(vector<Pet*> pets):PetDatabaseSortable(pets){}

    virtual bool smaller(int i, int j) const override{
        if(m_Pets[i]->getWeight() < m_Pets[j]->getWeight())
            return true;
        else
            return false;
    }      
    double GetWeight (int i){
        return m_Pets[i]->getWeight();
    }    
};

#endif /* PETDATABASESORTABLEBYWEIGHT_H */