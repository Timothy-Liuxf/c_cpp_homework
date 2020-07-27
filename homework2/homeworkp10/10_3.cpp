#include <iostream>
#include <fstream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

void Sort(char** strs, const int count);

int main()
{
	int size = 4, count = 0;
	char** strs = new char* [size];
	const char src[] = "strsrc.txt";
	const char dest[] = "strdest.txt";
	for (int i = 0; i < size; ++i)
	{
		strs[i] = new char[85];
	}
	ifstream fin(src, ios::in);
	if (!fin)
	{
		cerr << "Cannot open the file: " << src << endl;
		return 1;
	}
	while (fin.getline(strs[count++], 81, '\n'))
	{
		if (count == size)
		{
			char** newStrs = new char* [size *= 2];
			for (int i = 0; i < count; ++i)
			{
				newStrs[i] = new char[81];
				strcpy(newStrs[i], strs[i]);
				delete[] strs[i];
			}
			for (int j = count; j < size; ++j)
				newStrs[j] = new char[81];
			delete[] strs;
			strs = newStrs;
		}
	}
	--count;

	Sort(strs, count);

	fin.close();
	ofstream fout(dest, ios::out);
	if (!fout)
	{
		for (int i = 0; i < size; ++i) delete[] strs[i];
		delete[] strs;
		cerr << "Cannot open the file: " << dest << endl;
		return 2;
	}
	for (int i = 0; i < count; ++i)
	{
		fout << strs[i] << endl;
	}
	fout.close();
	for (int i = 0; i < size; ++i) delete[] strs[i];
	delete[] strs;
	return 0;
}

void Sort(char** strs, const int count)
{
	int right = count - 1, now = 0;
	while (right)
	{
		now = 0;
		for (int i = 0; i < right; ++i)
		{
			if (strcmp(strs[i], strs[i + 1]) > 0)
			{
				now = i;
				char* tmp = strs[i];
				strs[i] = strs[i + 1];
				strs[i + 1] = tmp;
			}
		}
		right = now;
	}
}
