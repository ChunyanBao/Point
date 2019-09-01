#include "Point.h"
#include<vector>

using namespace std;


int main()
{
	Point2D * point_1 = new Point2D("point2D", Color::white, 1.1, 2.2);
	Point2D * point_2 = new Point2D("point2D", Color::white, 3.3, 4.4);
	Point3D * point_3 = new Point3D("point3D", Color::blue, 1.1, 2.2, 3.3);
	Point3D * point_4 = new Point3D("point3D", Color::blue, 2.2, 3.3, 1.1);

	(*point_2) += (*point_1);	
	(*point_4) += (*point_3);
		
	vector<Point2D *> my_point;
	my_point.push_back(point_1);
	my_point.push_back(point_2);
	my_point.push_back(point_3);
	my_point.push_back(point_4);

	for(Point2D *point:my_point)
		cout<<point->toString()<<endl;

	return 1;	
}
