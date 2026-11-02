#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
    Array<int> nodata;
    std::cout << "size:" << nodata.size() <<std::endl;

    Array<int> data(5);
    std::cout<<"size:"<< data.size() <<std::endl;
    for (unsigned int i = 0; i < data.size(); i++)
        data[i] = static_cast<int> (i);
    for (unsigned int i = 0; i < data.size(); ++i)
        std::cout << "data[" << i << "] = " << data[i] << std::endl;

    std::cout << "deep copy:" << std::endl;
    Array<int> b(data);
    data[0] = 999;
    std::cout << "a[0] = " << data[0] << std::endl;
    std::cout << "b[0] = " << b[0] << " (must stay old value)" << std::endl;

    std::cout << "assignment operator (deep copy):" << std::endl;
    Array<int> c;
    c = data;
    data[1] = 777;
    std::cout << "data[1] = " << data[1] << std::endl;
    std::cout << "c[1] = " << c[1] << " (must stay old value)" << std::endl;

    std::cout << "\n== Const access ==" << std::endl;
    const Array<int> d(b);
    std::cout << "d[2] = " << d[2] << std::endl;

    std::cout << "\n== Another type (std::string) ==" << std::endl;
    Array<std::string> s(3);
    s[0] = "hello";
    s[1] = "template";
    s[2] = "array";
    for (unsigned int i = 0; i < s.size(); ++i)
        std::cout << "s[" << i << "] = " << s[i] << std::endl;

    std::cout << "\n== Out of bounds test ==" << std::endl;
    try
    {
        std::cout << data[42] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "caught: " << e.what() << std::endl;
    }

    return 0;
}

