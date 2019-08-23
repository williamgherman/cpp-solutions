#include <iostream>
#include <string>

void find_and_replace(std::string &s, const std::string &oldVal, 
                      const std::string &newVal)
{
    std::string::size_type pos = 0;
    while (pos < s.size() - oldVal.size()) {
        if (s.substr(pos, oldVal.size()) == oldVal) {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        } else
            ++pos;
    }
}

int main()
{
    std::string story = "But what're you wearing thru the week, tho?";
    std::cout << story << std::endl;
    find_and_replace(story, "tho", "though");
    find_and_replace(story, "thru", "through");
    std::cout << story << std::endl;
}
