#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

int main()
{
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> fam;
    std::string forename, surname, dob;
    std::cout << "Enter surname: " << std::flush;
    while (std::cin >> surname) {
        std::cout << "Enter first name and DOB; enter `q` for new surname: " 
                  << std::flush;
        while (std::cin >> forename >> dob && forename != "q") {
            fam[surname].push_back({forename, dob});
            std::cout << "Enter first name and DOB: " << std::flush;
        }
        std::cout << "Enter surname: " << std::flush;
    }
    std::cout << std::endl;
    for (auto &f : fam) {
        for (auto &p : f.second) {
            std::cout << p.first << " " << f.first << ", born "
                      << p.second << std::endl;
        }
    }
}
