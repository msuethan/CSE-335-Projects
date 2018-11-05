#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "SearchableVector.h"
//Made a mistake in HW8 and just noticed it now-so a few changes
class BinarySearch{
public:
    int search(SearchableVector* searchableVector){
        int left = 0;
        int right = searchableVector->getSize()-1;
        int query = searchableVector->getQuery();
        
        while(left <= right){//changed condition
            int midPoint = (left + right)/2;
            int midValue = searchableVector->getInteger(midPoint);
            if(query  == midValue){return midPoint;}
            else if(query < midValue){right = midPoint-1;}
            //replaced smaller fn w/ < sign since it makes more sense
            else{left = midPoint+1;}
        }
        return -1;
    }
};

#endif /* BINARYSEARCH_H */