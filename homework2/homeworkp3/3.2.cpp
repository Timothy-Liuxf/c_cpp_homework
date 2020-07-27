//#include <iostream>
//using namespace std;
//inline double Abs(double x) { return x < 0 ? -x : x; }
//class POINT
//{
//public:
//	double x;
//	double y;
//	POINT(double _x, double _y) { x = _x; y = _y; }
//	POINT() { x = y = 0; }
//	POINT(POINT& newpoint) { x = newpoint.x; y = newpoint.y; }
//};
//class Rectangle
//{
//private:
//	POINT leftbottom;
//	POINT righttop;
//public:
//	Rectangle() {}
//	Rectangle(double left, double bottom, double right, double top) : leftbottom(left, bottom), righttop(right, top) {}
//	Rectangle(Rectangle& newrec) : leftbottom(newrec.leftbottom), righttop(newrec.righttop) {}
//	void Set(double left, double bottom, double right, double top) 
//	{ 
//		leftbottom.x = left; leftbottom.y = bottom;  
//		righttop.x = right; righttop.y = top;
//	}
//	void Print()
//	{
//		cout << "The left bottom corner is (" << leftbottom.x << ", " << leftbottom.y << ")";
//		cout << " and the right top corner is (" << righttop.x << ", " << righttop.y << ")." << endl;
//	}
//	double Area() { return Abs(righttop.x - leftbottom.x) * Abs(righttop.y - leftbottom.y); }
//	double left() { return leftbottom.x; }
//	double bottom() { return leftbottom.y; }
//	double right() { return righttop.x; }
//	double top() { return righttop.y; }
//	~Rectangle() { cout << "Destructor called!" << endl; }
//};
//int main()
//{
//	Rectangle r1;
//	r1.Set(0, 0, 4, 5);
//	r1.Print();
//	cout << r1.Area() << endl;
//	Rectangle r2(r1);
//	r2.Print();
//	Rectangle r3(1, 1, 6, 7);
//	cout << r3.left() << " " << r3.bottom() << " " << r3.right() << " " << r3.top() << endl;
//	return 0;
//}
