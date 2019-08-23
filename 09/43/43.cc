#include <iostream>
#include <string>

void find_and_replace(std::string &s, const std::string &oldVal, 
                      const std::string &newVal)
{
    auto it = s.begin();
    while (it <= s.end() - oldVal.size()) {
        if (std::string{it, it + oldVal.size()} == oldVal) {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        } else
            ++it;
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
