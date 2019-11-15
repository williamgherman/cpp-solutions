### Exercise 13.14

Assume that `numbered` is a class with a default constructor that generates a
unique serial number for each object, which is stored in a data member named
`mysn`. Assuming `numbered` uses the synthesized copy-control members and given
the following function:

```cpp
void f(numbered s) { cout << s.mysn << endl; }
```

what output does the following code produce?

```cpp
numbered a, b = a, c = b;
f(a); f(b); f(c);
```

### Solution

Since the `numbered` class uses synthesized copy-control members, the
copy constructor will merely copy the `mysn` between the three objects.
Therefore, the output will show three identical numbers.
