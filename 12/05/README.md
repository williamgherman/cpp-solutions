### Exercise 12.05

We did not make the constructor that takes an `initializer_list` `explicit`.
Discuss the pros and cons of this design choice.

### Solution

Pros:
* Disallow use of implicit conversion from the `initializer_list` to `StrBlob`.
* Always explicitly must create a `StrBlob` object each time.

Cons:
* Can workaround by making a temporary `StrBlob`.
* Hard to debug if class users are unaware
