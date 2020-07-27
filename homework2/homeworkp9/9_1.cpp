//#include <iostream>
//using namespace std;
//
//template <typename T>
//T Max(T a, T b, T c)
//{
//	return a > b ? (c > a ? c : a) : (c > b ? c : b);
//}
//
//int main()
//{
//	char c1 = 'A', c2 = 'X', c3 = 'Z';
//	short s1 = 89, s2 = 12, s3 = 5;
//	int i1 = 55, i2 = 88, i3 = 4;
//	long l1 = 11, l2 = 99, l3 = 45;
//	float f1 = 2.02f, f2 = 0.26f, f3 = 10.56f;
//	double d1 = 1023.5669, d2 = 0.23, d3 = 3.1415;
//	cout << "char: " << Max(c1, c2, c3) << endl;
//	cout << "short: " << Max(s1, s2, s3) << endl;
//	cout << "int: " << Max(i1, i2, i3) << endl;
//	cout << "long: " << Max(l1, l2, l3) << endl;
//	cout << "float: " << Max(f1, f2, f3) << endl;
//	cout << "double: " << Max(d1, d2, d3) << endl;
//	cout << "mixed: " << Max<double>(s1, d2, f3) << endl;
//	return 0;
//}
