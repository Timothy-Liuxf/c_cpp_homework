#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
struct student
{
	int sno;
	string name;
	int score;
};
bool studcmp(const student& s1, const student& s2)
{
	if (s1.score != s2.score) return s1.score > s2.score;
	else if (s1.name != s2.name) return s1.name < s2.name;
	else return s1.sno < s2.sno;
}
int main()
{
	const char src[] = "src.txt";
	ifstream fin(src, ios::in);
	if (!fin)
	{
		cerr << "Cannot open the file: " << src << endl;
		return 1;
	}

	int num;
	student* stus;
	fin >> num;
	stus = new student[num];
	for (int i = 0; i < num; ++i)
	{
		fin >> stus[i].sno >> stus[i].name >> stus[i].score;
	}
	fin.close();
	sort(stus, stus + num, studcmp);
	cout << "          学生名单" << endl << "============================" << endl;
	cout << setw(10) << "sno|" << setw(10) << "name|" << setw(8) << "score|" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << setw(9) << stus[i].sno << '|' << setw(9) << stus[i].name << '|' << setw(7) << stus[i].score << '|' << endl;
	}
	delete[] stus;
	return 0;
}
