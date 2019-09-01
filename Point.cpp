#include"Point.h"

using namespace std;

Point2D::Point2D(string my_name, Color my_color, double x, double y)
{
	name = my_name;
	color = my_color;
	_x = x;
	_y = y;	
}

Point2D & Point2D::operator += (const Point2D & to_add)
{
	_x += to_add._x;
	_y += to_add._y;
	
	return *this;
}

string Point2D::toString()
{
	string my_string;
	string color_name[] = {"white", "blue", "black", "yellow", "red"};
	my_string = name + ", " + color_name[color] + ", " + std::to_string(_x) +", " + std::to_string(_y);

	return my_string; 	
}

Point3D::Point3D(string my_name, Color my_color, double x, double y, double z):Point2D(my_name, my_color, x, y)
{
	_z = z;
}

Point3D & Point3D::operator += (const Point3D & to_add)
{
	Point2D::operator +=(to_add);
	_z += to_add._z;

	return *this;
}

string Point3D::toString()
{
	return Point2D::toString() + ", " + std::to_string(_z);
}





