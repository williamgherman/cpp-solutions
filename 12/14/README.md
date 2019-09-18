### Exercise 12.14

Write your own version of a function that uses a `shared_ptr` to manage a
`connection`.

### Solution

```cpp
struct destination;
struct connection;
connection connect(destination *);
void disconnect(connection);
void end_connection(connection *p) { disconnect(*p); }

void f(destination &d /* other parameters */)
{
    connection c = connect(&d);
    std::shared_ptr<connection> p(&c, end_connection);
}
```
