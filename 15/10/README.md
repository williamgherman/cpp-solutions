### Exercise 15.10

Recalling the discussion from &sect;8.1, explain how the program on page 317
that passed an `ifstream` to the `Sales_data` `read` function works.

(program from p.317):

```cpp
ifstream input(argv[1]);
ofstream output(argv[2]);
Sales_data total;
if (read(input, total)) {
    Sales_data trans;
    while (read(input, trans)) {
        if (total.isbn() == trans.isbn())
            total.combine(trans);
        else {
            print(output, total) << endl;
            total = trans;
        }
    }
    print(output, total) << endl;
} else
    cerr << "No data?!" << endl;
```

### Solution

Since the `read` function accepts `istream&` types, it also accepts derived
types of `istream&`, in this case, `ifstream&`; same thing with `ostream&` and
`ofstream&`. The `istream&` argument in `read` has a dynamic type of `ifstream&`;
and the `ostream&` argument in `print` has a dynamic type of `ofstream&`.
