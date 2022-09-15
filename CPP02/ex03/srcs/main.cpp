#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point	a( 0.0 , 0.0 );
	Point	b( 10, 30.0 );
	Point	c( 20.0, 0.0 );
	bool	valid;

	valid = bsp(a, b, c, Point( 40.0, 0.0));

	if (valid == 0)
		LOG("Point is outside the triangle");
	else
		LOG("Point is inside the triangle");
    return 0;
}