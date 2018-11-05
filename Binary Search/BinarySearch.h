#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "SearchableVector.h"

class BinarySearch{
public:
    int search(SearchableVector* searchableVector){
        int left = 0;
        int right = searchableVector->getSize();        
        int query = searchableVector->getQuery();
        while(left <= right and right>=searchableVector->getInteger(0)){
            int midPoint = (left + right)/2;
            int midValue = searchableVector->getInteger(midPoint);
            if(query  == midValue){return midPoint;}
            else if(searchableVector->smaller(query,midValue)){right = midPoint;}
            else{left = midPoint; cout << left << endl;}
        }
        return -1;
    }
};

#endif /* BINARYSEARCH_H */