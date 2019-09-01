#include <iostream>
#include <cstring>
#include <string>

using namespace std;

enum Color{white = 0, blue, black, yellow, red};

class Point2D
{
	public:
		Point2D(string my_name, Color my_color,double x, double y);
		virtual Point2D & operator += (const Point2D &to_add);
		virtual string toString();


	protected:
		Color color;
		string name;
		double _x;
		double _y;
		Point2D(){}
};

class Point3D: public Point2D
{
	public:
		Point3D(string my_name, Color my_color, double x, double y, double z);
		Point3D & operator += (const Point3D & to_add);
		string toString();
	private:
		double _z;
		Point3D(){};
};
