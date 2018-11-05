#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

template <class T> class Queue{
protected:
	vector<T> m_Container;
public:    
        T top(){
            return m_Container[0];
        }   
        T pop(){
            T temp = top();
            m_Container.erase(m_Container.begin());
            return temp;
        }
        void push(T element) {
            m_Container.insert(m_Container.end(), element);
        }
        bool empty(){
            if(m_Container.size()==0) return true;
            else return false;
        }
};

int main(int argc, char** argv) {
    Queue<int> intQueue;
    for(int i=1; i<7; i++){
        intQueue.push(i);
    }
    while(intQueue.empty() == false){
        cout << intQueue.pop() << endl;
    }
    
    Queue<double> dblQueue;
    for(double i=0.1; i<0.7; i = i + 0.1){
        dblQueue.push(i);
    }   
    while(dblQueue.empty() == false){
        cout << dblQueue.pop() << endl;
    }    
    return 0;
}