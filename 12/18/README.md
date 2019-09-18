### Exercise 12.18

Why doesn't `shared_ptr` have a `release` member?

### Solution

Becuase other `shared_ptr`s pointing to the same object could still delete the
object, resulting in an illegal duplicate deletion.
