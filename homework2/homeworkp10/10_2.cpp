//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	const char src[] = "src.txt";
//	const char dest[] = "dest.dat";
//	int tmp;
//	ifstream fin(src, ios::in);
//	ofstream fout(dest, ios::out | ios::binary);
//	if (!fin)
//	{
//		cerr << "Cannot open the file: " << src;
//		return 1;
//	}
//	if (!fout)
//	{
//		cerr << "Cannot open the file: " << dest;
//		return 2;
//	}
//	while (fin >> tmp)
//	{
//		fout.write((const char*)&tmp, sizeof(int));
//	}
//	fout.close();
//	fin.close();
//	fin.open(dest, ios::in | ios::binary);
//	if (!fin)
//	{
//		cerr << "Cannot open the file: " << dest;
//		return 3;
//	}
//	fin.seekg(5 * sizeof(int), ios::beg);
//	int count = 0;
//	cout << left;						//ÉèÖÃ×ó¶ÔÆë
//	while (true)
//	{
//		if (fin.read((char*)&tmp, sizeof(int)))
//		{
//			cout << setw(8) << tmp << " ";
//		}
//		else break;
//		if (fin.read((char*)&tmp, sizeof(int)))
//		{
//			cout << setw(8) << tmp << " ";
//			if ((++count) % 5 == 0) cout << endl;
//		}
//		else break;
//		fin.seekg(2 * sizeof(int), ios::cur);
//	}
//	fin.close();
//	return 0;
//}
