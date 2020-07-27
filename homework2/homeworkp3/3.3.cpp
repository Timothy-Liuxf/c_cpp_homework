#include <iostream>
using namespace std;
class Car;
class Boat
{
private:
	double weight;
public:
	Boat() { weight = 0; }
	Boat(double _weight) { weight = _weight; }
	void Set(double w) { weight = w > 0 ? w : 0; }//Weight must be non-negative!
	void Print() { cout << "Weight: " << weight << endl; }
	double Weight() { return weight; }
	friend double TotalWeight(Boat B, Car C);
};
class Car
{
private:
	double weight;
public:
	Car() { weight = 0; }
	Car(double _weight) { weight = _weight; }
	void Set(double w) { weight = w > 0 ? w : 0; }//Weight must be non-negative!
	void Print() { cout << "Weight: " << weight << endl; }
	double Weight() { return weight; }
	friend double TotalWeight(Boat B, Car C);
};
double TotalWeight(Boat B, Car C)
{
	return B.weight + C.weight;
}
int main()
{
	Boat b;
	Car c(7.0);
	cout << b.Weight() << " " << c.Weight() << endl;
	b.Set(6.0);
	cout << TotalWeight(b, c) << endl;
	b.Print();
	c.Print();
	return 0;
}
