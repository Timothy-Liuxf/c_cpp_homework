#include <iostream>
using namespace std;

#define PI 3.1415926535897932384626

inline double Abs(double x)
{
	return x < 0.0 ? -x : x;
}

class Point
{
public:
	Point(double _x, double _y) : x(_x), y(_y) {}
	Point(const Point& _pt) : x(_pt.x), y(_pt.y) {}
	virtual double GetArea() const { return 0; }
	virtual ~Point() {}
private:
	double x;
	double y;
};

class Circle : virtual public Point
{
public:
	Circle(double _x, double _y, double _R) : Point(_x, _y), R(_R) {}
	Circle(const Circle& _cl) : Point(_cl), R(_cl.R) {}
	virtual double GetArea() const { return PI * R * R; }
	virtual ~Circle() {}
private:	
	double R;
};

class Square : virtual public Point
{
public:
	Square(double _x, double _y, double _L) : Point(_x, _y), L(_L) {}
	Square(const Square& _sq) : Point(_sq), L(_sq.L) {}
	virtual double GetArea() const { return L * L; }
	virtual ~Square() {}
private:
	double L;
};

class Margin : public Circle, public Square
{
public:
	Margin(double _x, double _y, double _R, double _L) : Point(_x, _y), Circle(_x, _y, _R), Square(_x, _y, _L) {}
	Margin(const Margin& _mg) : Point(_mg), Circle(_mg), Square(_mg) {}
	virtual double GetArea() const { return Abs(Circle::GetArea() - Square::GetArea()); }
	virtual ~Margin() {}
};

int main()
{
	Margin m1(0, 0, 5, 1);
	Margin m2(1, 2, 1, 20);
	cout << "m1: " << m1.GetArea() << endl << "m2: " << m2.GetArea() << endl;
	return 0;
}
