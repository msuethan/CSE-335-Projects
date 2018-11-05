//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef FISH_H
#define FISH_H
#include"Pet.h"

class Fish: public Pet{
protected:
    string m_habitat;
public:
    Fish(string name, string type, double price, unsigned int weight, string habitat): 
    Pet(name,type,price,weight), m_habitat(habitat){}

    virtual void getUnique()const override{
        cout << " WaterType: " << setw(11) << m_habitat << endl;
    }
};
#endif /* FISH_H */

