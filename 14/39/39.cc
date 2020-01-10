#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class StringRange {
public:
    StringRange(const std::size_t &low, const std::size_t &high):
        min(low), max(high) { }
    bool operator()(const std::string &s) const
        { return s.size() >= min && s.size() <= max; }
private:
    std::size_t min, max;
};

int main()
{
    std::ifstream in("input.txt");
    std::string word;
    StringRange sr(1, 9);
    int within = 0;
    int toobig = 0;
    if (!in) {
        std::cerr << "Error: file could not be opened." << std::endl;
        return -1;
    }

    while (in >> word) {
        if (sr(word))
            ++within;
        else
            ++toobig;
    }
    std::cout << "Total words in file of length [1, 10]: " << within << std::endl;
    std::cout << "Total words in file of length 10+: " << toobig << std::endl;

    return 0;
}
