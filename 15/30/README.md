### Exercise 15.30

Write your own version of the `Basket` class and use it to compute prices for
the same transactions as you used in the previous exercises.

### Solution

See program files.

NB: Although the program correctly functions, there are some strange behaviors
that the user should know:

 * The program has to call individual `add_item` calls in a loop like in `30.cc`
   to rightly use the quick syntax in the function. If the user does something
   like: `add_item(item1); add_item(item2);` in the loop, the function will have
   to check every individual item seperately.
 * The program does accept items with the same ISBN numbers but different other
   values, which will be incorrectly calculated during `print_receipt`.
