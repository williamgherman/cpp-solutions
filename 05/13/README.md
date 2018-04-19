### Exercise 5.13

Each of the programs in the highlighted text on page 184 contains a common
programming error. Identify and correct each error.

(a)
```cpp
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++;
    case 'e': eCnt++;
    default: iouCnt++;
}
```

(b)
```cpp
unsigned index = some_value();
switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
    ix = ivec.size()-1;
    ivec[ ix ] = index;
}
```

(c) 
```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
    case 1, 3, 5, 7, 9:
        oddcnt++;
        break;
    case 2, 4, 6, 8, 10:
        evencnt++;
        break;
}
```

(d)
```cpp
unsigned ival=512, jval=1024, kval=4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
}
```

### Solution

(a) fails to put breaks between each case and perhaps incorrectly assumes that
if the returned character is not `'a'` or `'e'` then it is one of `"iou"`:

```cpp
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a':
        aCnt++;
        break;
    case 'e':
        eCnt++;
        break;
    case 'i': case 'o': case 'u':
        iouCnt++;
        break;
    default:
        break;
}
```

(b) attempts to access variables which are defined and initialised within a
particular case, and the default case would be better written with a break:

```cpp
unsigned index = some_value();
int ix;
switch (index) {
    case 1:
        ix = get_value();
        ivec[ix] = index;
        break;
    default:
        ix = ivec.size() - 1;
        ivec[ix] = index;
        break;
}
```

(c) misnames defined variables, improperly uses cases and mistakes 10 for the
result of `10 % 10`, which should be 0. It also neglects the default case:

```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch(digit) {
    case 1: case 3: case 5: case 7: case 9:
        oddCnt++;
        break;
    case 0: case 2: case 4: case 6: case 8:
        evenCnt++;
        break;
    default:
        break; 
}
```

(d) attempts to use a non-constant as a case label and neglects the default
case:

```cpp
unsigned const ival=512, jval=1024, kval=4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
    default:
        break;
}
```
