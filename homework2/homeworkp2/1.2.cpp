//#include <iostream>
//using namespace std;
//int main()
//{
//	int* a = new int[100];
//	int(*b)[25] = new int[20][25];
//	int(*c)[8][5] = new int[9][8][5];
//	int m, n;
//	cin >> m >> n;
//
//	int sum = 0;
//	for (int i = 0; i < 100; ++i)
//		sum += (a[i] = i);
//	cout << "The sum of a is: " << sum << endl;
//
//	sum = 0;
//	for (int i = 0; i < 20; ++i)
//		for (int j = 0; j < 25; ++j)
//			sum += (b[i][j] = i * 25 + j);
//	cout << "The sum of b is: " << sum << endl;
//
//	sum = 0;
//	for (int i = 0; i < 9; ++i)
//		for (int j = 0; j < 8; ++j)
//			for (int k = 0; k < 5; ++k)
//				sum += (c[i][j][k] = i * 100 + j * 10 + k);
//	cout << " The sum of c is: " << sum << endl;
//
//	sum = 0;
//	int** d = new int* [m];
//	for (int i = 0; i < m; ++i)
//	{
//		d[i] = new int[n];
//		for (int j = 0; j < n; ++j)
//			sum += (d[i][j] = i * n + j);
//	}
//	cout << "The sum of d is: " << sum << endl;
//	for (int i = 0; i < m; ++i)
//		delete[] d[i];
//	delete[] d;
//	delete[] c;
//	delete[] b;
//	delete[] a;
//	return 0;
//}
