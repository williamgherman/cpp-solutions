### Exercise 3.33

What would happen if we did not initialize the `scores` array in the program on
page 166?

### Solution

When written inside a function (including the `main` function), the `scores`
array would not be initialized and would therefore hold undefined values. The
program would still likely compile and run, but the values printed would be
garbage values. For instance, if we were expecting its output to be

```
0 0 0 0 0 0 0 0 3 4 1
```

we might have ended up with

```
10239 9823237 23749287 78374927 2938472 121 29472974 1231927 29349274 1271972 23
```
