#include <iostream>
#include <string>
#include <memory>
#include <cstddef>

int main()
{
    int n = 0;
    std::string s;
    std::cout << "Enter number of strings: " << std::flush;
    std::cin >> n;
    --n;
    std::allocator<std::string> alloc;
    std::string *p = alloc.allocate(n);
    std::string *q = p;
    while (std::cin >> s && q != p + n)
        alloc.construct(q++, s);
    const std::size_t size = q - p;
    while (q != p) {
        std::cout << *--q << std::endl;
        alloc.destroy(q);
    }
    alloc.deallocate(p, n);
}
