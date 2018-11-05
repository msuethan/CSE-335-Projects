//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef PET_H
#define PET_H
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Pet{
protected:
    string m_name;
    string m_type;
    unsigned int m_weight;
    double m_price;
    Pet(){m_name="Rex",m_type="Parrot",m_weight=0,m_price=0;}
public:
    Pet(string name, string type, double price, unsigned int weight){
        m_name = name;
        m_type = type;
        m_price = price;
        m_weight = weight;
    }
    Pet(const Pet& other) = default;
    Pet& operator=(const Pet& other) = default;    
    virtual ~Pet() = default;
    string getName() const {
        return m_name;
    }
    string getType() const{
        return m_type;
    }
    unsigned int getWeight() const{
        return m_weight;
    }
    double getPrice() const{
        return m_price;
    }
    virtual void getUnique() const = 0;
    virtual void print(){
        cout << fixed;
        cout << setprecision(2);
        
        cout << "Name:  "  << m_name;
        cout << " Type:  " << setw(8) << m_type;
        cout << " Weight:  " << setw(8) << m_weight;
        cout << " Price:  " << setw(8) << m_price;
        getUnique();
    }
    
};

#endif /* PET_H */