//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef DOG_H
#define DOG_H
#include"Pet.h"

class Dog: public Pet{
protected:
    string m_breed;
public:
    Dog(string name, string type,  double price, unsigned int weight,string breed): 
    Pet(name,type,price,weight), m_breed(breed){} 
  
    virtual void getUnique()const override{
        cout << " Category:" << setw(13) << m_breed << endl;
    }
};

#endif /* DOG_H */

