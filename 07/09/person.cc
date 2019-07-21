#include <string>
#include <iostream>

class Person {
    std::string name;
    std::string address;
    const std::string getName() const { return name; }
    const std::string getAddress() const { return address; }
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.getName() << " " << person.getAddress();
    return os;
}
