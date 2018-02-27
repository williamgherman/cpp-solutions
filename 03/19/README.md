### Exercise 3.19

List three ways to define a `vector` and give it ten elements, each with the
value 42. Indicate whether there is a preferred way to do so and why.

### Solution

Here are the verbatim solutions:

```cpp
vector<int> ivec1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

vector<int> ivec2;
for (int i = 0; i < 10; i++)
    ivec2.push_back(42);

vector<int> ivec3(10, 42);
```

The preferred solution is the third one, using the vector constructor to
initialize the vector with ten `42` elements. It is more concise than `ivec2`'s
solution and clearer than `ivec1`'s solution.
