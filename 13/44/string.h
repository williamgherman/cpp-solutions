#ifndef STRING_H_
#define STRING_H_

#include <memory>    // allocator
#include <algorithm> // uninitialized_copy
#include <utility>   // pair

class String {
public:
    String(): String("") { }
    String(const char *);
    String(const String &);
    String &operator=(const String &);
    ~String();
    std::pair<char*, char*> alloc_n_copy(const char *, const char *);
    void free();

private:
    char *data;
    char *end;
    std::allocator<char> alloc;
    void init(const char*, const char*);
};

void String::init(const char *b, const char *e)
{
    auto temp = alloc_n_copy(b, e);
    data = temp.first;
    end = temp.second;
}

String::String(const char *s)
{
    char *b, *e;
    b = s;
    while (*s++)
        ; /* NULL */ 
    e = s;
    init(b, e);
}

String::String(const String &s)
{
    init(s.data, s.end);
}

String &String::operator=(const String &rhs)
{
    auto temp = alloc_n_copy(rhs.data, rhs.end);
    free();
    data = temp.first;
    end = temp.second;
    return *this;
}

String::~String()
{
    free();
}

std::pair<char*, char*> alloc_n_copy(const char *b, const char *e)
{
    auto s = alloc.allocate(e - b);
    return {s, std::uninitialized_copy(b, e, s)};
}

void free()
{
    if (data) {
        std::for_each(data, end, [this](char &c) { alloc.destroy(&c); }
        alloc.deallocate(data, end - data);
    }
}

#endif
