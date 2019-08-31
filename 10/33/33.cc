#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "USAGE: " << argv[0] << " in_file out_file_1 out_file_2"
                  << std::endl;
        return 1;
    }

    std::ifstream in(argv[1]);
    std::ofstream out1(argv[2]), out2(argv[3]);
    std::istream_iterator<int> init(in), eof;
    std::ostream_iterator<int> to_odd(out1, " "), to_even(out2, "\n");

    std::for_each(init, eof, [&to_odd, &to_even](const int i)
                             { *(i % 2 == 0 ? to_even : to_odd)++ = i; });
}
