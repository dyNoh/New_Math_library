#ifndef __POINT_H__
#define __POINT_H__

/*
    점에 관련된 헤더 파일
*/

class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0, double y = 0);	// 생성자
	void setPoint(const double& x, const double& y);
	void setPoint(const Point& p);
	void setX(const double x);
	void setY(const double y);
	Point getPoint(void) const;
	double getX(void) const;
	double getY(void) const;
	double distance(Point& p);			// 다른 점과의 거리
};
#endif