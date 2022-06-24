#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point	a(4.75, 5.03);

    std::cout << a.getX() << std::endl;
    std::cout << a.getY() << std::endl;
    return 0;
}