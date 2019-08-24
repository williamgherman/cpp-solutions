### Exercise 9.51

Write a class that has three `unsigned` members representing year, month and
day. Write a constructor that takes a `string` representing a date. Your
constructor should handle a variety of date formats, such as January 1, 1900,
Jan 1, 1900, 1/1/1900 and so on.

### Solution

```cpp
class Date {
public:
    Date(std::string s) {
        unsigned format = 0;
        
        // 1/13/1900
        if (s.find_first_of("/") != std::string::npos)
            format = 1;

        // Jan 13, 1900 or January 13, 1900
        else if (s.find_first_of(",") != std::string::npos)
            format = 2;

        // 1900-01-13
        else if (s.find_first_of("-") != std::string::npos)
            format = 3;

        // 13.01.1900
        else if (s.find_first_of(".") != std::string::npos)
            format = 4;

        else {
            std::cerr << "Unrecognized date format" << std::endl;
            exit(EXIT_FAILURE);
        }

        switch(format) {
            case 1:
                month = std::stoi(s.substr(0, s.find_first_of("/")));
                day = std::stoi(s.substr(s.find_first_of("/") + 1, 
                                           s.find_last_of("/") -
                                           s.find_first_of("/")));
                year = std::stoi(s.substr(s.find_last_of("/") + 1, 4));
                break;
            case 2:
                if (s.find("Jan") < s.size()) month = 1;
                if (s.find("Feb") < s.size()) month = 2;
                if (s.find("Mar") < s.size()) month = 3;
                if (s.find("Apr") < s.size()) month = 4;
                if (s.find("May") < s.size()) month = 5;
                if (s.find("Jun") < s.size()) month = 6;
                if (s.find("Jul") < s.size()) month = 7;
                if (s.find("Aug") < s.size()) month = 8;
                if (s.find("Sep") < s.size()) month = 9;
                if (s.find("Oct") < s.size()) month = 10;
                if (s.find("Nov") < s.size()) month = 11;
                if (s.find("Dec") < s.size()) month = 12;

                const std::string nums{"0123456789"};
                day = std::stoi(s.substr(s.find_first_of(nums),
                                s.find_first_of(",") - s.find_first_of(nums)));
                year = std::stoi(s.substr(s.find_last_of(" ") + 1, 4);
                break;

            case 3:
                year = std::stoi(0, s.find_first_of("-"));
                month = std::stoi(s.find_first_of("-") + 1, s.find_last_of("-")
                                  - s.find_first_of("-"));
                day = std::stoi(s.find_last_of("-") + 1, 2);
                break;

            case 4:
                day = std::stoi(0, s.find_first_of("."));
                month = std::stoi(s.find_first_of(".") + 1, s.find_last_of(".")
                                  - s.find_first_of("."));
                year = std::stoi(s.find_last_of(".") + 1, 4);
                break;

            default:
                std::cerr << "Unrecognized date format" << std::endl;
                exit(EXIT_FAILURE);
        }
    }

private:
    unsigned year;
    unsigned month;
    unsigned day;
}
```
