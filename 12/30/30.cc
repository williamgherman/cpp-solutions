#include <iostream>
#include <fstream>
#include <string>
#include "Query.h"

void runQueries(std::ifstream &infile)
{
    TextQuery tq(infile);
    while (true) {
        std::cout << "Enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    }
}

int main()
{
    std::ifstream file("test.txt");
    runQueries(file);
    return 0;
}
