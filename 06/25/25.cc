#include <cstdlib>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " STR1 STR2" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << argv[1] << argv[2] << std::endl;
    return EXIT_SUCCESS;
}
