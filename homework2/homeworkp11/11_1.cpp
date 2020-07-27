//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//#define BAD_NEW -1
//#define BAD_NEW_TYPE int
//#define OVERFLOW_N -1.0
//#define OVERFLOW_TYPE double
//#define UNDERFLOW_N -1.0f
//#define UNDERFLOW_TYPE float
//#define DELETE_NULL_PTR -1l
//#define DELETE_NULL_PTR_TYPE long
//
//class Stack
//{
//private:
//	int* p;
//	int N;
//	int max;
//public:
//	Stack(int num)
//	{
//		p = new(std::nothrow) int[max = num];
//		if (p == NULL) throw BAD_NEW;
//		N = 0;
//	}
//
//	void push_back(int elem)
//	{
//		if (N == max) throw OVERFLOW_N;
//		p[N++] = elem;
//	}
//
//	void pop_back()
//	{
//		if (N == 0) throw UNDERFLOW_N;
//		--N;
//	}
//	
//	~Stack() { if (p == NULL) delete[] p; }
//};
//
//int main()
//{
//
//	try
//	{
//		int a, b;
//		cin >> a;
//		cin >> b;
//		int* p = new(std::nothrow) int[a];
//		if (p == NULL) throw BAD_NEW;
//		delete[] p;
//		Stack s(5);
//		for (int i = 0; i < a; ++i)
//			s.push_back(i);
//		for (int i = 0; i < b; ++i)
//			s.pop_back();
//		int* k = NULL;
//		if (k == NULL) throw DELETE_NULL_PTR;
//		else delete k;
//		
//	}
//	catch (BAD_NEW_TYPE b)
//	{
//		cerr << "new failed!" << endl;
//		exit(1);
//	}
//	catch (OVERFLOW_TYPE o)
//	{
//		cerr << "overflow!" << endl;
//		exit(1);
//	}
//
//	catch (UNDERFLOW_TYPE u)
//	{
//		cerr << "underflow!" << endl;
//		exit(1);
//	}
//	catch (DELETE_NULL_PTR_TYPE d)
//	{
//		cerr << "delete null pointer!" << endl;
//		exit(1);
//	}
//	return 0;
//}
