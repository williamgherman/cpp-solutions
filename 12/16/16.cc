#include <memory>
#include <new>

int main()
{
    std::unique_ptr<int> p1(new int(42));
//    std::unique_ptr<int> p2(p1);
    std::unique_ptr<int> p3;
    p3 = p1;
}
