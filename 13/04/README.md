### Exercise 13.04

Assuming `Point` is a class type with a `public` copy constructor, identify each
use of the copy constructor in this program fragment:

```cpp
Point global;
Point foo_bar(Point arg)
{
    Point local = arg, *heap = new Point(global);
    *heap = local;
    Point pa[4] = {local, *heap};
    return *heap;
}
```

### Solution

During an assumed `foo_bar` function call, its `Point` parameter is copied into
the function's argument `arg`. `arg` is then copied into `local`, and `global`
is copied into the `new Point`, pointed to by `heap`. Two copies of `local` are
copied into the `pa` array. Finally, the function copies `*heap` (`local`) to
the call of the function.
