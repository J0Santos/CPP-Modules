#include "Point.hpp"

Fixed	getTriangleArea	(Point v1, Point v2, Point v3)
{
	Fixed	area;

	area = 	(v1.getX() * ( v2.getY() - v3.getY() ) + v2.getX() * ( v1.getY() - v3.getY() ) 
		+ v3.getX() * ( v1.getY() - v2.getY())) / 2;
	if (area < 0)
		area = area * -1;
	std::cout << area << std::endl;
	return area;
}

bool    bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	abc;
	Fixed	pab;
	Fixed	pac;
	Fixed	pbc;

	abc = getTriangleArea(a, b, c);
	pab = getTriangleArea(p, a, b);
	pac = getTriangleArea(a, a, c);
	pbc = getTriangleArea(p, b, c);

	return (abc >= pab + pac + pbc);
}