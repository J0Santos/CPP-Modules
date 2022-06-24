#include "Point.hpp"

Point::Point( void ): x(Fixed(0)), y(Fixed(0))
{}

Point::Point( float const a, float const b ): x(Fixed(a)), y(Fixed(b))
{}

Point::Point ( Point const &src ): x(src.x), y(src.y)
{}

Point::~Point()
{}

Point   Point::operator=(Point const &rhs)
{
	Point temp( rhs );
	return temp;
}

Fixed	Point::getX( void ) const
{
	return this->x;
}

Fixed	Point::getY( void ) const
{
	return this->y;
}
