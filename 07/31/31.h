#ifndef 31_H_
#define 31_H_
#include <iostream>

struct Y;

struct X {
    Y *py;
};

struct Y {
    X myx;
};
#endif
