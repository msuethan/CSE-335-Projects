#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

class SearchableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual string getQuery() = 0;
    virtual string compareAt(int i) = 0;
};

#endif

