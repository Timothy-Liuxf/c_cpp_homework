//#include <iostream>
//#include <string>
//using namespace std;
//class Ball
//{
//public:
//	enum Color	//Ball类内的枚举类型
//	{
//		Red,
//		Yellow,
//		Blue,
//		White,
//		Black
//	};
//	Ball(Color color) :_color(color) {}	//初始化_color
//	string GetColor()	//得到颜色字符串
//	{
//		switch (_color)
//		{
//		case Red:
//			return static_cast<string>("红"); //转换为string对象
//		case Yellow:
//			return static_cast<string>("黄");
//		case Blue:
//			return static_cast<string>("蓝");
//		case White:
//			return static_cast<string>("白");
//		case Black:
//			return static_cast<string>("黑");
//		default:
//			cout << "No such Color!" << endl;
//			return static_cast<string>("No such Color!");
//		}
//	}
//private:
//	Color _color;
//};
//int main()
//{
//	Ball ball[5] = { Ball::Red, Ball::Yellow, Ball::Blue, Ball::White, Ball::Black };
//	int sum = 0;
//	for(int i = 0; i < 3; ++i)
//		for(int j = i + 1; j < 4; ++j)
//			for (int k = j + 1; k < 5; ++k)
//			{
//				++sum;
//				cout << ball[i].GetColor() << ", " << ball[j].GetColor() << ", " << ball[k].GetColor() << endl;
//			}
//	cout << "总取法数是：" << sum;
//	return 0;
//}
