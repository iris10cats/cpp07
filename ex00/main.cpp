#include <string>
#include <iostream>
#include "whatever.hpp"


template <typename T>
void swap(T &a, T &b) 

{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
const T &min(const T &a, const T &b) {
    if (a < b)
        return a;
    return b;
}

template <typename T>
const T &max(const T &a, const T &b) {
    if (a < b)
        return b;
    return a;
}



int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    float f1 = 3.14f;
    float f2 = -2.5f;
    std::cout << "min(3.14f,-2.5f) = " << ::min(f1, f2) << "f" << std::endl;
    std::cout << "max(3.14f,-2.5f) = " << ::max(f1, f2) << "f" << std::endl;

    /*float f3 = 2.32f;
    int i = 0;
    ::swap(f3, i);
    std::cout << "f3 = " << f3 << ", i = " << i << std::endl;
 */
    int s = 7;
    ::swap(s, s);
    std::cout << "swap(s,s) keeps value: " << s << std::endl;
    return 0;
}