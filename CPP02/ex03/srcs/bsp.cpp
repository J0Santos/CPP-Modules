#include "Point.hpp"

Fixed	getTriangleArea	(Point v1, Point v2, Point v3)
{
	Fixed	area;

	area = 	(v1.getX() * ( v2.getY() - v3.getY() ) + v2.getX() * ( v1.getY() - v3.getY() ) 
		+ v3.getX() * ( v1.getY() - v2.getY())) / 2;
	if (area < 0)
		area = area * -1;
	return area;
}

bool    bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	abc;
	Fixed	pab;
	Fixed	pac;
	Fixed	pbc;

	abc = getTriangleArea(a, b, c);
	std::cout << "abc area: " << abc << std::endl;
	pab = getTriangleArea(p, a, b);
	std::cout << "pab area: " << pab << std::endl;
	pac = getTriangleArea(p, a, c);
	std::cout << "pac area: " << pac << std::endl;
	pbc = getTriangleArea(p, b, c);
	std::cout << "pbc area: " << pbc << std::endl;

	return (abc >= pab + pac + pbc);
}