### Exercise 13.35

What would happen if `Message` had used the synthesized versions of the
copy-control members?

### Solution

If this were the case, a `Message` would fail to add its contents to the
necessary folders in a copy constructor as well as fail to correctly update its
folders to replace the `Message`s in a copy-assignment.
