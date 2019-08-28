### Exercise 10.07

Determine if there are any errors in the following programs and, if so, correct
the error(s):

```cpp
/* A */

vector<int> vec; list<int> lst; int i;
while (cin >> i)
    lst.push_back(i);
copy(lst.cbegin(). lst.cend(), vec.begin());

/* B */

vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);
```

### Solution

(a) incorrectly tries to copy items into the empty `vector`. This could be fixed
by using a `back_inserter` iterator. (b) similarly illegally tries to fill items
in the empty `vector`, and can be fixed by also using a `back_inserter` or by
replacing `reserve` by (what was probably meant) `resize`:

```cpp
/* A */

vector<int> vec; list<int>; int i;
while (cin >> i)
    lst.push_back(i);
copy(lst.cbegin(), lst.cend(), back_inserter(vec));

/* B */

vector<int> vec;
vec.resize(10);
fill_n(vec.begin(), 10, 0);
```
