#include <vector>
#include <string>
#include <memory>
#include <new>
#include <stdexcept> // out_of_range

#include "StrBlob.h"
#include "StrBlobPtr.h"

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return lhs.curr == rhs.curr;
}

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return lhs.curr < rhs.curr;
}

bool operator>(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs < rhs && lhs == rhs);
}

bool operator<=(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs > rhs);
}

bool operator>=(const StrBlobPTr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs < rhs);
}

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string &StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlobPtr::operator++()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlobPtr::operator++(int)
{
    auto ret = *this;
    ++*this;
    return ret;
}

StrBlobPtr StrBlobPtr::operator--()
{
    --curr;
    check(curr, "decrement before begin of StrBlobPtr");
    return *this;
}

StrBlobPtr StrBlobPtr::operator--(int)
{
    auto ret = *this;
    --*this;
    return ret;
}

StrBlobPtr StrBlobPtr::operator+(std::size_t n) const
{
    auto ret = *this;
    ret.curr += n;
    check(ret.curr, "increment past end of StrBlobPtr");
    return ret;
}

StrBlobPtr StrBlobPtr::operator-(std::size_t n) const
{
    auto ret = *this;
    ret.curr -= n;
    check(ret.curr, "decrement before begin of StrBlobPtr");
    return ret;
}
