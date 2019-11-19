#ifndef HASPTR_H_
#define HASPTR_H_

#include <iostream>
#include <string>
#include <new>
#include <cstdlib>

class HasPtr {
    friend void swap(HasPtr &, HasPtr &);
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
    HasPtr(const HasPtr &p):
        ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr &operator=(HasPtr);
    bool operator<(const HasPtr &);
    ~HasPtr();
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "swap(HasPtr &, HasPtr &)" << std::endl;
}

HasPtr &HasPtr::operator=(HasPtr rhs)
{
    swap(*this, rhs);
    return *this;
}

bool HasPtr::operator<(const HasPtr &rhs)
{
    return *ps < *rhs.ps;
}


HasPtr::~HasPtr()
{
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

#endif
