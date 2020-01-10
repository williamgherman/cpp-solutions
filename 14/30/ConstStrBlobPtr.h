#ifndef CONSTSTRBLOBPTR_H_
#define CONSTSTRBLOBPTR_H_

#include <vector>
#include <string>
#include <memory>
#include <new>
#include <utility>   // initializer_list
#include <stdexcept> // out_of_range

#include "StrBlob.h"

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(const StrBlob &a, std::size_t sz = 0):
        wptr(a.data), curr(sz) { }
    std::string &deref() const;
    StrBlobPtr &incr();
    const std::string &operator*() const
    {   auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    const std::string *operator->() const
        { return &this->operator*(); }
private:
    std::shared_ptr<const std::vector<std::string>>
        check(std::size_t, const std::string &) const;
    std::weak_ptr<const std::vector<std::string>> wptr;
    std::size_t curr;
};
#endif
