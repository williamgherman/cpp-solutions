#include <iostream>
#include <new>

int main()
{   
    int buf = 0;
    std::cout << "Enter max length: " << std::flush;
    std::cin >> buf;
    char *s = new char[buf+1]; // for '\0' at end
    std::cin.ignore();

    std::cout << "Input string: " << std::flush;
    std::cin.get(s, buf+1);
    std::cout << s << std::endl;
    delete [] s;
}
