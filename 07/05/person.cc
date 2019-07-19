#include <string>

class Person {
    std::string name;
    std::string address;
    const std::string getName() const { return name; }
    const std::string getAddress() const { return address; }
};
