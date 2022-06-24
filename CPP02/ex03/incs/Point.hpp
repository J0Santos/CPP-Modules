#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(float const a, float const b);
    Point(Point const &src);
    ~Point();
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

    Point   operator=(Point const &rhs);
};

#endif /* POINT_HPP */