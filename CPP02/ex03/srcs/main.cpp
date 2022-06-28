#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point	a( 0.0 , 0.0 );
	Point	b( 0, 20.0 );
	Point	c( 20.0, 0.0 );
	bool	valid;

	valid = bsp(a, b, c, Point( 10.0, 10.0));

    std::cout << valid << std::endl;
    return 0;
}