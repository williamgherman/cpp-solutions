#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "long long int: " << sizeof(long long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "void *: " << sizeof(void *) << endl;

    cout << "\nFixed width int types: " << endl;
    cout << "size_t: " << sizeof(size_t) << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << endl;
    cout << "char16_t: " << sizeof(char16_t) << endl;
    cout << "char32_t: " << sizeof(char32_t) << endl;
    cout << "int8_t: " << sizeof(int8_t) << endl;
    cout << "uint8_t: " << sizeof(uint8_t) << endl;
    cout << "int16_t: " << sizeof(int16_t) << endl;
    cout << "uint16_t: " << sizeof(uint16_t) << endl;
    cout << "int32_t: " << sizeof(int32_t) << endl;
    cout << "uint32_t: " << sizeof(uint32_t) << endl;
    cout << "int64_t: " << sizeof(int64_t) << endl;
    cout << "uint64_t: " << sizeof(uint64_t) << endl;

    return 0;
}
