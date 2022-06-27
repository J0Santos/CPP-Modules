#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point	a( 4.75, 5.03 );
	Point	b( 20.0, 10.0 );
	Point	c( 6.84, 2.5 );
	bool	valid;

	valid = bsp(a, b, c, Point(10, 10));

    std::cout << valid << std::endl;
    // std::cout << a.getY() << std::endl;
    return 0;
}