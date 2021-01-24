### Exercise 15.22

For the class you chose in the previous exercise, identify some of the likely
virtual functions as well as `public` and `protected` members.

### Solution

```cpp
// (b) Geometric primitives

class Shape { };

class 2DShape : public Shape {
public:
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};
class 3DShape : public Shape {
public:
    virtual double surfaceArea() const = 0;
    virtual double volume() const = 0;
};

class Circle : public 2DShape { };
class Ellipse : public 2DShape { };
class Rect : public 2DShape { };
class Triangle : public 2DShape { };
class Star : public 2DShape { };
class Polygon : public 2DShape { }

class Box : public 3DShape { };
class Sphere : public 3DShape { };
class Cone : public 3DShape { };
class Pyramid : public 3DShape { };
class Donut : public 3DShape { };
class Polyhedron : public 3DShape { };
```
