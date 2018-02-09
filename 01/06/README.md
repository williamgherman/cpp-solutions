### Exercise 1.06

Explain whether the following program fragment is legal.

```cpp
std::cout << "The sum of " << c1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```

If the program is legal, what does it do? If the program is not legal, why not?
How would you fix it?

### Solution

The program fragment is illegal because the second and third lines include the
stream operator `<<`, but their left-hand operands are not streams. A fix would
include either removing the semicolons on lines 1 and 2, or writing `std::cout`
on lines 2 and 3.
