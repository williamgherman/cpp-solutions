#ifndef STRVEC_H_
#define STRVEC_H_

#include <utility>
#include <algorithm>
#include <string>
#include <memory>

class StrVec {
public:
    StrVec():
        elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(std::initializer_list<std::string>);
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec &);
    ~StrVec();
    void push_back(const std::string &);
    std::size_t size() const { return first_free - elements; }
    std::size_t capacity() const { return cap - elements; }
    void reserve(const std::size_t &);
    void resize(const std::size_t &n, const std::string &t = std::string());
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
private:
    std::allocator<std::string> alloc;
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string *, const std::string *);
    void free();
    void chk_n_alloc() { if (size() == capacity()) reallocate(); }
    void reallocate();

    std::string *elements;
    std::string *first_free;
    std::string *cap;
    
};

StrVec::StrVec(std::initialiezr_list<std::string> il):
    elements(nullptr), first_free(nullptr), cap(nullptr)
{
    for (auto s : il)
        push_back(s);
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec()
{
    free();
}

StrVec &StrVec::operator=(const StrVec &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (std::size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

void StrVec::push_back(const std::string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    if (elements) {
        for (auto p = first_free; p != elements; /* NULL */)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::reserve(const std::size_t &n)
{
    if (n > capacity())
        alloc_n_move(n);
}

void StrVec::resize(const std::size_t &n, const std::string &t = std::string())
{
    if (n > size()) {
        reserve(n);
        for (std::size_t i = size(); i != count; ++i)
            alloc.construct(first_free++, t);
    }
    if (n < size()) {
        while (first_free != elements + n)
            alloc.destroy(--first_free);
    }
}


}

#endif
