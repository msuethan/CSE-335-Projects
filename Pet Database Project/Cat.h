//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef CAT_H
#define CAT_H
#include"Pet.h"

class Cat: public Pet{
protected:
    bool m_fluffy;
public:
    Cat(string name, string type,  double price,unsigned int weight, bool fluffy): 
    Pet(name,type,price,weight), m_fluffy(fluffy){}

    virtual void getUnique()const override{
        cout << " Fluffy:" << setw(15) << m_fluffy << endl;
    }
};
#endif /* CAT_H */

