//#include <iostream>
//using namespace std;
//static const double PI = 3.14159265359;
//class Circle
//{
//public:
//	struct POINT
//	{
//		double x;
//		double y;
//	};
//	Circle(double _x, double _y, double _radium);
//	Circle(Circle& c) : centre(c.centre), radium(c.radium) {}
//	void Set(double _New_x, double _New_y, double _New_radium);
//	void Print();
//	POINT Centre() { return centre; }
//	double Radium() { return radium; }
//	double Area() { return PI * radium * radium; }
//	~Circle() { cout << "Destructor called!" << endl; }
//private:
//	POINT centre;
//	double radium;
//};
//Circle::Circle(double _x, double _y, double _radium)
//{
//	centre.x = _x;
//	centre.y = _y;
//	radium = _radium;
//}
//void Circle::Set(double _New_x, double _New_y, double _New_radium)
//{
//	centre.x = _New_x;
//	centre.y = _New_y;
//	radium = _New_radium;
//}
//void Circle::Print()
//{
//	cout << "Centre: (" << centre.x << ", " << centre.y << ") Radium: " << radium << endl;
//}
//int main()
//{
//	Circle c1(2.0, 2.0, 4.0);
//	Circle c2(c1);
//	c1.Print();
//	c2.Print();
//	cout << c1.Area() << " " << c2.Area() << endl;
//	c2.Set(0.0, 0.0, 5.0);
//	c2.Print();
//	cout << c2.Area() << endl;
//	return 0;
//}
