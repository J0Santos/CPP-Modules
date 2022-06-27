#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	alpha;
	Fixed	alphaD;
	Fixed	beta;
	Fixed	gamma;

    std::cout << (b.getY() - c.getY()) * (point.getX() - c.getX()) << std::endl;
    std::cout << (c.getX() - b.getX()) * (point.getY() - c.getY()) << std::endl;



	alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) ;
	alphaD = ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));

	std::cout << alpha << std::endl;
	std::cout << alphaD << std::endl;
	// beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY()))
	// 	/ ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	// gamma = Fixed(1.0f) - alpha - beta;
	
	return (alpha > 0 && beta > 0 && gamma > 0);
}