#include <string>
#include <iostream>

class Person;
std::istream &read(std::istream &is, Person &person);

class Person {
    std::string name;
    std::string address;
    const std::string getName() const { return name; }
    const std::string getAddress() const { return address; }

    Person() = default;
    Person(const std::string n, const std::string a):
        name(n), address(a) { }
    Person(std::istream &is) {
        read(is, *this);
    }

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
