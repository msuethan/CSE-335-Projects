//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PETDATABASESEARCHABLE_H
#define PETDATABASESEARCHABLE_H
#include"SearchableVector.h"
#include<string>

template <class T> class PetDatabaseSearchable: public SearchableVector{
protected:
    T m_PDS;
    PetDatabaseSearchable(){m_PDS = 0;}        
public:  
    PetDatabaseSearchable(T t){
        m_PDS = t;
    }
    PetDatabaseSearchable(const PetDatabaseSearchable& other) = default;
    PetDatabaseSearchable& operator=(const PetDatabaseSearchable& other) = default;
    virtual ~PetDatabaseSearchable() = default;    
    virtual unsigned int getSize() const override{
        return m_PDS->getSize();
    }
    virtual bool smaller(int i, int j) const override{
        return m_PDS->smaller(i,j);
    }  
    Pet* getPet(int i){
        return m_PDS->AnotherFunction(i);
    }
    virtual string getAtt(int i) const = 0;
    string compareAt(int i) override{
        return (getAtt(i));
    }
};

#endif /* PETDATABASESEARCHABLE_H */

