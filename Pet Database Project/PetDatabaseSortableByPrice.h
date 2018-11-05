//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESORTABLEBYPRICE_H
#define PETDATABASESORTABLEBYPRICE_H
#include"PetDatabaseSortable.h"

class PetDatabaseSortableByPrice:public PetDatabaseSortable{
public:
    PetDatabaseSortableByPrice(vector<Pet*> pets):PetDatabaseSortable(pets){}

    virtual bool smaller(int i, int j) const override{
        if(m_Pets[i]->getPrice() < m_Pets[j]->getPrice())
            return true;
        else
            return false;
    }        
    double GetPrice (int i){
        return m_Pets[i]->getPrice();
    }     
};

#endif /* PETDATABASESORTABLEBYPRICE_H */