//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point() { x = y = 0; };
//	Point(int _x, int _y) : x(_x), y(_y) {};
//	Point(const Point& _Point) : x(_Point.x), y(_Point.y) {};
//	void Set(int _new_x, int _new_y) { x = _new_x; y = _new_y; }
//	Point& operator=(const Point& _new_Point) { x = _new_Point.x, y = _new_Point.y; return *this; }
//	void Print() const { cout << "(" << x << ", " << y << ")"; }
//	~Point() { cout << "The destructor of Point "; Print(); cout << " called!" << endl; }
//	friend class Rectangle;
//};
//
//class Rectangle
//{
//private:
//	Point left_bottom;
//	Point right_top;
//	static int Abs(int x) { return x > 0 ? x : -x; }
//public:
//	Rectangle() {}
//	Rectangle(int _left, int _bottom, int _right, int _top) : left_bottom(_left, _bottom), right_top(_right, _top) {}
//	Rectangle(const Point& _left_bottom, const Point& _right_top) : left_bottom(_left_bottom), right_top(_right_top) {}
//	Rectangle(const Rectangle& _Rect) : left_bottom(_Rect.left_bottom), right_top(_Rect.right_top) {}
//	void Set(int _new_left, int _new_bottom, int _new_right, int _new_top);
//	void Set(const Point& _new_left_bottom, const Point& _new_right_top);
//	void Print() const;
//	int Area() const;
//	~Rectangle() { cout << "The destructor of Rectangle "; left_bottom.Print(); cout << ", "; right_top.Print(); cout << " called!" << endl; }
//};
//
//void Rectangle::Set(int _new_left, int _new_bottom, int _new_right, int _new_top)
//{
//	left_bottom.Set(_new_left, _new_bottom);
//	right_top.Set(_new_right, _new_top);
//}
//
//void Rectangle::Set(const Point& _new_left_bottom, const Point& _new_right_top)
//{
//	left_bottom = _new_left_bottom;
//	right_top = _new_right_top;
//}
//
//void Rectangle::Print() const
//{
//	cout << "The left bottom corner: ";
//	left_bottom.Print();
//	cout << "; The right top corner: ";
//	right_top.Print();
//	cout << "." << endl;
//}
//
//int Rectangle::Area() const
//{
//	return Abs(right_top.x - left_bottom.x) * Abs(right_top.y - left_bottom.y);
//}
//
//int main()
//{
//	Point p1(6, 6), p2(8, 9);
//	Rectangle rec1, rec2(1, 1, 3, 4), rec3(p1, p2);
//	Rectangle rec4(rec2);
//	rec1.Print();
//	rec2.Print();
//	rec3.Print();
//	rec4.Print();
//	rec1.Set(3, 4, 100, 400);
//	rec2.Set(p1, p2);
//	rec2.Print();
//	cout << "Area of rec1: " << rec1.Area() << endl;
//	return 0;
//}