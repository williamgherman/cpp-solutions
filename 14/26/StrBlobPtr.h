#ifndef STRBLOBPTR_H_
#define STRBLOBPTR_H_

#include <vector>
#include <string>
#include <memory>
#include <new>
#include <utility>   // initializer_list
#include <stdexcept> // out_of_range

#include "StrBlob.h"

class StrBlobPtr {
    friend bool operator==(const StrBlobPtr &, const StrBlobPtr &);
    friend bool operator!=(const StrBlobPtr &, const StrBlobPtr &);
    friend bool operator<(const StrBlobPtr &, const StrBlobPtr &);
    friend bool operator>(const StrBlobPtr &, const StrBlobPtr &);
    friend bool operator<=(const StrBlobPtr &, const StrBlobPtr &);
    friend bool operator!=(const StrBlobPtr &, const StrBlobPtr &);
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, std::size_t sz = 0):
        wptr(a.data), curr(sz) { }
    std::string &operator[](std::size_t n)
        { return (*wptr.lock())[n]; }
    const std::string &operator[](std::size_t n) const
        { return (*wptr.lock())[n]; }
    std::string &deref() const;
    StrBlobPtr &incr();
private:
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string &) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};
#endif
