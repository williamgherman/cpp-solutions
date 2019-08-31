#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
    std::istream_iterator<int> in(std::cin), eof;
    std::ostream_iterator<int> out(std::cout, " ");
    std::vector<int> v(in, eof);
    std::sort(v.begin(), v.end());
    std::unique_copy(v.begin(), v.end(), out);
    std::cout << std::endl;
}
