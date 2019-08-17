#include <iostream>
#include <fstream>
#include <cstdlib> // exit codes
#include "Sales_data.h"

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cout << "USAGE: " << argv[0] << " input_file output_file" 
                  << std::endl;
        return EXIT_FAILURE;
    }
    
    std::ifstream in(argv[1]);
    std::ofstream out(argv[2]);
    if (in) {
        Sales_data total;
        if (read(in, total)) {
            Sales_data trans;
            while (read(in, trans)) {
                if (total.isbn() == trans.isbn())
                    total.combine(trans);
                else {
                    print(out, total) << std::endl;
                    total = trans;
                }
            }
            print(out, total) << std::endl;
        } else {
            std::cerr << "No data?!" << std::endl;
        }
    } else {
        std::cerr << "Failed to read/write files." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
