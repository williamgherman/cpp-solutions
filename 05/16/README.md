### Exercise 5.16

The `while` loop is particularly good at executing while some condition holds;
for example, when we need to read values until end-of-file. The `for` loop is
generally thought of as a step loop: An index steps through a range of values in
a collection. Write an idiomatic use of each loop and then rewrite each using
the other loop construct. If you could use only one loop, which would you
choose? Why?

### Solution

```cpp
char c;
int i;

// idiomatic examples
while ((c = getchar()) != EOF)
    // ...
for (i = 0; i < 100; ++i)
    cout << i << endl;

// using the other loop type
for (/* null */; (c = getchar()) != EOF; )
    // ...
i = 0;
while (i < 100)
    cout << i++ << endl;
```

I would prefer to use only `for` loops if I had to, since the functionality of
the `while` loop can be replicated by just including no init statement and no
step statement.
