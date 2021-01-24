### Exercise 15.20

Write code to test your answers to the previous two exercises.

### Solution

See `20.cc`.

Output of compilation from `g++`:
```
20.cc:9:17: error: 'struct Base Base::Base' is inaccessible within this context
    9 |     void memfcn(Base &b) { b = *this; }
      |                 ^~~~
20.cc:1:13: note: declared here
    1 | struct Base {};
      |             ^
20.cc: In member function 'void Derived_from_Private::memfcn(Base&)':
20.cc:9:33: error: 'Base' is an inaccessible base of 'Derived_from_Private'
    9 |     void memfcn(Base &b) { b = *this; }
      |                                 ^~~~
20.cc: In function 'int main()':
20.cc:25:10: error: 'Base' is an inaccessible base of 'Priv_Derv'
   25 |     p = &d2;
      |          ^~
20.cc:26:10: error: 'Base' is an inaccessible base of 'Prot_Derv'
   26 |     p = &d3;
      |          ^~
20.cc:28:10: error: 'Base' is an inaccessible base of 'Derived_from_Private'
   28 |     p = &dd2;
      |          ^~~
20.cc:29:10: error: 'Base' is an inaccessible base of 'Derived_from_Protected'
   29 |     p = &dd3;
      |          ^~~
```
