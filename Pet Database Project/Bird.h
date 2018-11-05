//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef BIRD_H
#define BIRD_H
#include"Pet.h"

class Bird: public Pet{
protected:
    bool m_nocturnality;
public:
    Bird(string name, string type, double price, unsigned int weight, bool nocturnality): 
    Pet(name,type,price,weight), m_nocturnality(nocturnality){}

    virtual void getUnique()const override{
        cout << boolalpha;
        cout << " Nocturnal:" << setw(12) << m_nocturnality << endl;
    }
};

#endif /* BIRD_H */