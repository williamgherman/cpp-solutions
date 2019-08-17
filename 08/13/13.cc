#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "USAGE: " << argv[0] << " in_file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string line, word;
    std::vector<PersonInfo> people;
    std::istringstream record;
    std::ifstream in(argv[1]);
    if (in) {
        while (std::getline(in, line)) {
            PersonInfo info;
            record.clear();
            record.str(line);
            record >> info.name;
            while (record >> word)
                info.phones.push_back(word);
            people.push_back(info);
        }
    } else {
        std::cerr << "Failed to open \"" << argv[1] << "\"." << std::endl;
        return EXIT_FAILURE;
    }
    for (const auto &person : people) {
        std::cout << person.name << ": ";
        for (const auto &number : person.phones)
            std::cout << number << " ";
        std::cout << std::endl;
    }
}
