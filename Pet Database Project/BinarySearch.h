//Author: Ethan Lee (leeethan)
//Author: Cameron Lozier (lozierca)
#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "SearchableVector.h"

class BinarySearch{
public:
    int search(SearchableVector* searchableVector){
        int left = 0;
        int right = searchableVector->getSize()-1;
        string query = searchableVector->getQuery();
        
        if(isdigit(query[0])){query = stod(query);}//used in price/weight search
        
        while(left <= right){
            int midPoint = (left + right)/2;
            
            string midValue = searchableVector->compareAt(midPoint);
            if(isdigit(midValue[0])){midValue = stod(midValue);}
            
            if(query == midValue){return midPoint;}
            else if(query < midValue){right = midPoint-1;}
            else{left = midPoint+1;}
        }
        return -1;
    }
};

#endif /* BINARYSEARCH_H */