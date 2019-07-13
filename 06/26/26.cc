#include <iostream>

int main(int argc, char **argv)
{
    std::cout << argc-1 << " additional argument" 
              << (argc-1 != 1 ? "s were " : " was ") << "supplied." << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    return 0;
}
