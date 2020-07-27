//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#include <cstdarg>
//#include <ctime>
//using namespace std;
//class Ball
//{
//private:
//	int x;
//	int y;
//	int z;
//	int r;
//	const double PI = 3.14159265358979324;
//public:
//	Ball() { x = y = z = r = 0; }
//	Ball(int _x, int _y, int _z, int _r) : x(_x), y(_y), z(_z), r(abs(_r)) {};
//	Ball(const Ball& _new_Ball) : x(_new_Ball.x), y(_new_Ball.y), z(_new_Ball.z), r(_new_Ball.r) {}
//	int GetX() { return x; }
//	int GetY() { return y; }
//	int GetZ() { return z; }
//	int GetR() { return r; }
//	void Set(int _new_x, int _new_y, int _new_z, int _new_r);
//	void Print() const;
//	double Volume() const { return 4.0 / 3.0 * PI * r * r * r; }
//	void Swap(Ball& b);
//	~Ball() { cout << "Destructor (" << x << ", " << y << ", " << z << " | " << r << ") called!" << endl; }
//	friend void Sort(Ball* b, int num);
//};
//
//void Ball::Set(int _new_x, int _new_y, int _new_z, int _new_r)
//{
//	x = _new_x;
//	y = _new_y;
//	z = _new_z;
//	r = abs(_new_r);
//}
//
//void Ball::Print() const
//{
//	cout << "Centre: (" << setw(5) << x << ", " << setw(5) << y << ", " << setw(5) << z << "), radium: " << setw(5) << r << ". ";
//}
//
//void Ball::Swap(Ball& b)
//{
//	struct
//	{
//		int x;
//		int y;
//		int z;
//		int r;
//	} tmp = {x, y, z, r};
//	Set(b.x, b.y, b.z, b.r);
//	b.Set(tmp.x, tmp.y, tmp.z, tmp.r);
//}
//
//void Sort(Ball* b, int num)
//{
//	for(int i = 0; i < num - 1; ++i)
//		for (int j = i + 1; j < num; ++j)
//			if (b[i].r > b[j].r)
//				b[i].Swap(b[j]);
//}
//
//int main()
//{
//	srand(0);
//	Ball b1[10];
//	Ball* b2 = new Ball[20];
//	cout << "Static balls:" << endl;
//	for (int i = 0; i < 10; ++i)
//	{
//		b1[i].Set(rand(), rand(), rand(), abs(rand()));
//		b1[i].Print();
//		cout << "Volume: " << b1[i].Volume() << endl;
//	}
//	cout << endl << "-------------------------" << endl << endl << "Dynamic balls:" << endl;
//	for (int i = 0; i < 20; ++i)
//	{
//		b2[i].Set(rand(), rand(), rand(), abs(rand()));
//		b2[i].Print();
//		cout << "Volume: " << b2[i].Volume() << endl;
//	}
//	cout << endl << "=========================" << endl << endl;
//	Sort(b1, 10);
//	Sort(b2, 20);
//	cout << "After sorting: " << endl << endl << "static balls: " << endl;
//	for (int i = 0; i < 10; ++i)
//	{
//		b1[i].Print();
//		cout << "Volume: " << b1[i].Volume() << endl;
//	}
//	cout << endl << "-------------------------" << endl << endl << "Dynamic balls:" << endl;
//	for (int i = 0; i < 20; ++i)
//	{
//		b2[i].Print();
//		cout << "Volume: " << b2[i].Volume() << endl;
//	}
//	cout << endl << "=========================" << endl << endl;
//	int sumx = 0, sumy = 0, sumz = 0, sumr = 0;
//	double avex, avey, avez, aver, avev = 0.0;
//	for (int i = 0; i < 10; ++i)
//	{
//		sumx += b1[i].GetX();
//		sumy += b1[i].GetY();
//		sumz += b1[i].GetZ();
//		sumr += b1[i].GetR();
//		avev += b1[i].Volume() / 10.0;
//	}
//	avex = sumx / 10.0;
//	avey = sumy / 10.0;
//	avez = sumz / 10.0;
//	aver = sumr / 10.0;
//	cout << "Average:" << endl << endl;
//	cout << "Static balls: " << "Centre: (" << avex << ", " << avey << ", " << avez << "), radium: " << aver << ", Volume: " << avev << endl;
//	sumx = 0;
//	sumy = 0;
//	sumz = 0;
//	sumr = 0;
//	avev = 0.0;
//	for (int i = 0; i < 20; ++i)
//	{
//		sumx += b2[i].GetX();
//		sumy += b2[i].GetY();
//		sumz += b2[i].GetZ();
//		sumr += b2[i].GetR();
//		avev += b2[i].Volume() / 20.0;
//	}
//	avex = sumx / 20.0;
//	avey = sumy / 20.0;
//	avez = sumz / 20.0;
//	aver = sumr / 20.0;
//	cout << "Dynamic balls: " << "Centre: (" << avex << ", " << avey << ", " << avez << "), radium: " << aver << ", Volume: " << avev << endl;
//	cout << endl << "=========================" << endl << endl;
//	delete[] b2;
//	return 0;
//}
