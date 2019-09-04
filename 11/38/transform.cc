#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <cstdlib> // EXIT_FAILURE etc.
#include <stdexcept> // runtime_error

std::unordered_map<std::string, std::string> buildMap(std::ifstream &map_file)
{
    std::unordered_map<std::string, std::string> trans_map;
    std::string key, value;
    while (map_file >> key && std::getline(map_file, value)) {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw std::runtime_error("no rule for " + key);
    }
    return trans_map;
}

const std::string &
transform(const std::string &s, 
          const std::unordered_map<std::string, std::string> &m)
{
    auto map_it = m.find(s);
    if (map_it != m.cend())
        return map_it->second;
    else
        return s;
}

void word_transform(std::ifstream &map_file, std::ifstream &input)
{
    auto trans_map = buildMap(map_file);
    std::string text;
    while (std::getline(input, text)) {
        std::istringstream stream(text);
        std::string word;
        bool firstword = true;
        while (stream >> word) {
            if (firstword)
                firstword = false;
            else
                std::cout << " ";
            std::cout << transform(word, trans_map);
        }
        std::cout << std::endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << "USAGE: " << argv[0] << " rules_file intput_file"
                  << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream map_file(argv[1]), input(argv[2]);
    if (!map_file) {
        std::cerr << "Error: could not open file " << argv[1] << std::endl;
        return EXIT_FAILURE;
    }
    if (!input) {
        std::cerr << "Error: could not open file " << argv[2] << std::endl;
        return EXIT_FAILURE;
    }
    word_transform(map_file, input);
}
