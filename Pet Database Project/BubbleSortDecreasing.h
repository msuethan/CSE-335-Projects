#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H
#include "BubbleSortTemplate.h"

class BubbleSortDecreasing: public BubbleSortTemplate{
public:
    virtual bool needSwap(SortableVector* sv, int i, int j)const override{
        return sv->smaller(i,j);
    }
        
};

#endif /* BUBBLESORTDECREASING_H */

