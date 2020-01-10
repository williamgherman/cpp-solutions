#ifndef STRBLOBPTRPTR_H_
#define STRBLOBPTRPTR_H_

#include "StrBlobPtr.h"

class StrBlobPtrPtr {
public:
    StrBlobPtrPtr() = default;
    StrBlobPtrPtr(StrBlobPtr *p): pointer(p) { }

    StrBlobPtr &operator*() const
        { return *pointer; }
    StrBlobPtr *operator->() const
        { return pointer; }
private:
    StrBlobPtr pointer = nullptr;
};
