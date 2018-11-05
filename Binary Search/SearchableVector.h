#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

class SearchableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual int getQuery() = 0;
    virtual int getInteger(int i) const = 0;
};

#endif

