//#include <iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(double X0, double Y0) : X(X0), Y(Y0) { cout << "Point constructor!" << endl; }
//	Point(const Point& srcPt) : X(srcPt.X), Y(srcPt.Y) { cout << "Point copy constructor!" << endl; }
//	void Set(double new_X, double new_Y) { X = new_X; Y = new_Y; }
//	void Print() const { cout << "(" << X << ", " << Y << ")"; }
//	~Point() { cout << "Point destructor!" << endl; }
//protected:
//	double X;
//	double Y;
//};
//
//class Line : public Point
//{
//public:
//	Line(double X, double Y, double _S) : Point(X, Y), S(_S) { cout << "Line constructor!" << endl; }
//	Line(const Line& srcLn) : Point(srcLn), S(srcLn.S) { cout << "Line copy constructor!" << endl; }
//	void Set(double new_X, double new_Y, double new_S) { Point::X = new_X; Point::Y = new_Y; S = new_S; }
//	void Print() const { cout << "(" << Point::X << ", " << Point::Y << ") Slope: " << S << endl; }
//	~Line() { cout << "Line destructor!" << endl; }
//private:
//	double S;
//};
//
//int main()
//{
//	Line demo1(1, 2, 3);
//	demo1.Print();
//	demo1.Set(0, 0, 9);
//	demo1.Print();
//	Line demo2(demo1);
//	demo2.Print();
//	return 0;
//}
