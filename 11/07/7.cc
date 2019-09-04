#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    std::map<std::string, std::vector<std::string>> family;
    std::string forename, surname;
    std::cout << "Enter surname: " << std::flush;
    while (std::cin >> surname) {
        std::cout << "Enter first name, enter `q` for new surname: " 
                  << std::flush;
        while (std::cin >> forename && forename != "q") {
            family[surname].push_back(forename);
            std::cout << "Enter first name: " << std::flush;
        }
        std::cout << "Enter surname: " << std::flush;
    }
    for (auto &f : family) {
        for (auto &fname : f.second) {
            std::cout << fname << " " << f.first << std::endl;
        }
    }
}
