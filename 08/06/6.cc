#include <iostream>
#include <fstream>
#include <cstdlib> // exit codes
#include "Sales_data.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "USAGE: " << argv[0] << " filename" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::ifstream in(argv[1]);
    if (in) {
        Sales_data total;
        if (read(in, total)) {
            Sales_data trans;
            while (read(in, trans)) {
                if (total.isbn() == trans.isbn())
                    total.combine(trans);
                else {
                    print(std::cout, total) << std::endl;
                    total = trans;
                }
            }
            print(std::cout, total) << std::endl;
        } else {
            std::cerr << "No data?!" << std::endl;
        }
    } else {
        std::cerr << "Failed to open \"" << argv[1] << "\"." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
