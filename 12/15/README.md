### Exercise 12.15

Rewrite the first exercise to use a lambda in place of the `end_connection`
function.

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
    std::shared_ptr<connection> p(&c, [](connection *p)
                                        { disconnect(*p); });
}
```
