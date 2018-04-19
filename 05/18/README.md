### Exercise 5.18

Explain each of the following loops. Correct any problems you detect.

(a)
```cpp
do
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
while (cin);
```

(b) 
```cpp
do {
    // ...
} while (int ival = get_response());
```

(c)
```cpp
do {
    int ival = get_response();
} while (ival);
```

### Solution

(a) fails to place the `do` statement in a block.

```cpp
do {
    int v1, v2;
    cout << "Please enter tow numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
} while (cin);
```

(b) attempts to initialise a new variable in the `while` statement which is not
seen in the first iteration of the `do` loop.

```cpp
int ival;
do {
    // ...
} while (ival = get_response());
```

(c) fails to declare ival outside of the scope of the `do` loop.

```cpp
int ival;
do {
    ival = get_response();
} while (ival);
```
