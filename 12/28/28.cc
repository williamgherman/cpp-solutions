#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cstdlib>
#include <algorithm>

using LineNum = std::vector<std::string>::size_type;

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " filename" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "File " << argv[1] << " failed to open" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::string> lines;
    std::map<std::string, std::set<LineNum>> wordmap;
    int linenum = 0;
    while (std::getline(file, line)) {
        lines.push_back(line);
        std::istringstream curr(line);
        std::string word;
        while (curr >> word) {
            wordmap[word].insert(linenum);
        }
        ++linenum;
    }
    
    while (true) {
        std::cout << "Enter word to search for, or q to quit: " << std::flush;
        std::string s;
        if (!(std::cin >> s) || s == "q")
            break;
        auto found = wordmap.find(s);
        if (found != wordmap.end()) {
            std::cout << s << " occurs " << found->second.size()
                      << (found->second.size() > 1 ? " times" : " time")
                      << std::endl;
            for (auto i : found->second) {
                std::cout << "\t(line " << i+1 << ") " << lines.at(i)
                          << std::endl;
            }
        } else {
            std::cout << s << " occurs 0 times" << std::endl;
        }
    }
}

