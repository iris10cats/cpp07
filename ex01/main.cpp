#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(const T &element ) {
    std::cout<<element;
}

void incrementElement(int &element) {
    ++element;
}

int main(void) {
    int num[] = {0,1,2,3,4};
    const unsigned int numLength = sizeof(num) / sizeof(num[3]);

    iter(num, numLength, printElement<int>);
    std::cout << std::endl;
    iter (num, numLength, incrementElement);

    iter(num, numLength, printElement<int>);

    std::cout << std::endl;

    const std::string strings[] = {"abc", "123", "d"};
    const unsigned int stringsLen = sizeof(strings) / sizeof(strings[1]);

    iter(strings, stringsLen, printElement<std::string>);

    std::cout << std::endl;

    const std::string list[] = {"a", "b", ""};
    const unsigned int listLen = sizeof(list) / sizeof(list[1]);
    iter(list, listLen, printElement<std::string>);
    std::cout << std::endl;

    
    

     /*const int readonlyNums[] = {10, 20, 30};
    const unsigned int readonlyLen = sizeof(readonlyNums) / sizeof(readonlyNums[0]); 
    iter(readonlyNums, readonlyLen, incrementElement); // compile error
    */
    return 0;
}