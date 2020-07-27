//#include <iostream>
//#include <cstring>
//#pragma warning(disable:4996)
//using namespace std;
//
//class String
//{
//public:
//	String(const char* src_str = NULL);
//	String(const String& src_str);
//	void Set(const char* new_str);
//	void Set(const String& new_str);
//	void Print() const { cout << str; }
//	friend String operator+(const String& _Left, const String& _Right);
//	String& operator=(const String& new_str);
//	~String() { delete[] str; }
//private:
//	char* str;
//};
//
//
//String::String(const char* src_str)
//{
//	if (src_str == NULL)
//	{
//		str = new char[1];
//		*str = '\0';
//	}
//	else
//	{
//		str = new char[strlen(src_str) + 1];
//		strcpy(str, src_str);
//	}
//}
//
//String::String(const String& src_str)
//{
//	if (&src_str == this)
//	{
//		str = new char[1];
//		*str = '\0';
//		return;
//	}
//	str = new char[strlen(src_str.str) + 1];
//	strcpy(str, src_str.str);
//}
//
//void String::Set(const char* new_str)
//{
//	delete[] str;
//	if (new_str == NULL)
//	{
//		str = new char[1];
//		*str = '\0';
//	}
//	else
//	{
//		str = new char[strlen(new_str) + 1];
//		strcpy(str, new_str);
//	}
//}
//
//void String::Set(const String& new_str)
//{
//	if (&new_str == this) return;
//	delete[] str;
//	str = new char[strlen(new_str.str) + 1];
//	strcpy(str, new_str.str);
//}
//
//String operator+(const String& _Left, const String& _Right)
//{
//	char* res = new char[strlen(_Left.str) + strlen(_Right.str) + 1];
//	strcpy(res, _Left.str);
//	strcat(res, _Right.str);
//	String _res(res);
//	delete[] res;
//	return _res;
//}
//
//String& String::operator=(const String& new_str)
//{
//	if (&new_str == this) return *this;
//	delete[] str;
//	str = new char[strlen(new_str.str) + 1];
//	strcpy(str, new_str.str);
//	return *this;
//}
//
//int main()
//{
//	String s1("abcd"), s2("efghij"), s3("lmnop"), s4, s5;
//	s4 = s1 + s2 + s3;  s4.Print();
//	cout << endl;
//	s5 = s5 + s3 + s4;  s5.Print();
//	cout << endl;
//	s4.Set("hahaha");
//	s4.Print();
//	return 0;
//}
