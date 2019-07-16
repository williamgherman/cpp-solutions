#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word,
                        const std::string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(void)
{
    const std::string &succ = "success";
    const std::string &fail = "failure";
    std::cout << make_plural(1, succ, "es") << ": "
              << make_plural(2, succ, "es") << "\n"
              << make_plural(1, fail) << ": " << make_plural(2, fail)
              << std::endl;
}
