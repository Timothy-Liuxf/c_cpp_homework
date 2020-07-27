//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Queue
//{
//private:
//	T* Front;
//	int Tail;
//	int max;
//public:
//	Queue(int _size);
//	Queue(const Queue& _srcque);
//	bool In(const T& _elem);
//	T Out();
//	bool Empty() const { return Tail == 0; }
//	~Queue() { delete[] Front; };
//};
//
//template <typename T>
//Queue<T>::Queue(int _size)
//{
//	Front = new T[max = _size];
//	Tail = 0;
//}
//
//template <typename T>
//Queue<T>::Queue(const Queue& _srcque)
//{
//	Front = new T[max = _srcque.max];
//	Tail = _srcque.Tail;
//	for (int i = 0; i < Tail; ++i)
//	{
//		Front[i] = _srcque.Front[i];
//	}
//}
//
//template <typename T>
//bool Queue<T>::In(const T& _elem)
//{
//	if (Tail == max)
//	{
//		cout << "Overflow!" << endl;
//		return false;
//	}
//	else
//	{
//		Front[Tail++] = _elem;
//		return true;
//	}
//}
//
//template <typename T>
//T Queue<T>::Out()
//{
//	if (Empty())
//	{
//		cout << "Empty queue!" << endl;
//		return Front[0];
//	}
//	else
//	{
//		T _res = Front[0];
//		--Tail;
//		for (int i = 0; i < Tail; ++i)
//		{
//			Front[i] = Front[i + 1];
//		}
//		return _res;
//	}
//}
//
//int main()
//{
//	Queue<int> q_int(10);
//	Queue<double> q_double(10);
//	cout << "int: " << endl;
//	for (int i = 0; i < 10; ++i)
//		q_int.In(i);
//	q_int.In(55);
//	while (!q_int.Empty()) cout << q_int.Out() << " ";
//	cout << endl;
//	q_int.Out();
//	cout << "====================" << endl;
//	cout << "double: " << endl;
//	for (double i = 0.5; i < 47.0; i += 5.0)
//		q_double.In(i);
//	q_double.In(55.5);
//	while (!q_double.Empty()) cout << q_double.Out() << " ";
//	cout << endl;
//	q_double.Out();
//	return 0;
//}
