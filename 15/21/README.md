### Exercise 15.21

Choose one of the following general abstractions containing a family of types
(or choose one of your own). Organize the types into an inheritance hierarchy:

(a) Graphical file formats (such as gif, tiff, jpeg, bmp)  
(b) Geometric primitives (such as box, circle, sphere, cone)  
(c) C++ language types (such as class, function, member function)

### Solution

```cpp
// (b) Geometric primitives

class Shape { };
class 2DShape : public Shape { };
class 3DShape : public Shape { };

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
