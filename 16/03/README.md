### Exercise 16.03

Call your `compare` function on two `Sales_data` objects to see how your
compiler handles errors during instantiation.

### Solution

See program files. `g++` spits out a lengthy compiler error of more than 300
lines (see `log.txt`), of which the first two statements are useful:

```

In file included from /usr/include/c++/11.1.0/string:48,
                 from /usr/include/c++/11.1.0/bits/locale_classes.h:40,
                 from /usr/include/c++/11.1.0/bits/ios_base.h:41,
                 from /usr/include/c++/11.1.0/ios:42,
                 from /usr/include/c++/11.1.0/ostream:38,
                 from /usr/include/c++/11.1.0/iostream:39,
                 from 3.cc:1:
/usr/include/c++/11.1.0/bits/stl_function.h: In instantiation of ‘constexpr bool std::less<_Tp>::operator()(const _Tp&, const _Tp&) const [with _Tp = Sales_data]’:
3.cc:9:23:   required from ‘int compare(const T&, const T&) [with T = Sales_data]’
3.cc:17:25:   required from here
/usr/include/c++/11.1.0/bits/stl_function.h:386:20: error: no match for ‘operator<’ (operand types are ‘const Sales_data’ and ‘const Sales_data’)
  386 |       { return __x < __y; }
      |                ~~~~^~~~~
```

telling the user that there is no `operator<` for `Sales_data`. The remaining
error logs are attempts to convert the `Sales_data` objects as other objects
to make the comparison work.
