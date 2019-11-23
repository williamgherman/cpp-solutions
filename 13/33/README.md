### Exercise 13.33

Why is the parameter to the `save` and `remove` members of a `Message` a
`Folder&`? Why didn't we define that parameter as `Folder`? Or `const Folder&`?

### Solution

This way the `Folder` object does not need to be copied over, and we are editing
the `Folder`, so we cannot use a `const Folder&`.
