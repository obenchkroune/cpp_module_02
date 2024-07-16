#include "Point.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(3, 0);
    Point c(2, 2);
    Point p(2, 1);

    std::string res = (bsp(a, b, c, p) ? " is " : " is not ");

    std::cout
        << "The point P" << p
        << res << "inside the triangle\n"
        << "A" << a << '\n'
        << "B" << b << '\n'
        << "C" << c << '\n';
    return 0;
}
