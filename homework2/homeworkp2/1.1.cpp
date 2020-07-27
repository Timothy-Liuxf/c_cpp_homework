#include <iostream>
#include <iomanip>
using namespace std;
class Pascal
{
private:
	int** triangle;
	int _row;
	static ostream& itv(ostream& o) { return o << "    "; };	//间隔
	static ostream& half_itv(ostream& o) { return o << "  "; }	//半个间隔
	static ostream& blk(ostream& o) { return o << "    "; }	//每个数字占位
	static ostream& half_blk(ostream& o) { return o << "  "; }	//半个数字占位
public:
	Pascal(int row);
	void print();
	~Pascal();
};

Pascal::Pascal(int row) :_row(row)
{
	triangle = new int* [row];
	for (int i = 0; i < row; ++i)
	{
		triangle[i] = new int[i + 1];
		triangle[i][0] = triangle[i][i] = 1;
		for (int j = 1; j < i; ++j)
			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
	}
}

void Pascal::print()
{
	for (int i = 0; i < _row; ++i)
	{
		int tmp = (_row - 1 - i) / 2;
		for (int j = 0; j < tmp; ++j)
			cout << itv << blk;
		if ((_row - 1 - i) % 2)
			cout << half_itv << half_blk;
		for (int j = 0; j <= i; ++j)
			cout << setw(4) << triangle[i][j] << itv;
		cout << endl;
	}
}

Pascal::~Pascal()
{
	for (int i = 0; i < _row; ++i)
		delete[] triangle[i];
	delete[] triangle;
}

int main()
{
	Pascal p(10);
	p.print();
	return 0;
}

