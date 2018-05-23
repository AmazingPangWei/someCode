//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//	Shape() {}
//	~Shape() {}
//	virtual void Show() = 0;
//	static float SumArea;
//};
//
//float Shape::SumArea = 0;
//
//class Circle :public Shape
//{
//private:
//	float r;
//	float s;
//public:
//	Circle(float t) :r(t)
//	{
//		s = r*r*3.14;
//		SumArea = SumArea + s;
//	}
//	void Show()
//	{
//		cout << "半径为：" << r << endl;
//		cout << "该圆的半径为：" << s << endl;
//	}
//};
//
//class Rectangle :public Shape
//{
//private:
//	float a, b, s;
//public:
//	Rectangle(float A, float B) :a(A), b(B)
//	{
//		s = a*b;
//		SumArea = SumArea + s;
//	}
//	void Show()
//	{
//		cout << "矩形长为：" << a << ' ' << "矩形宽为：" << b << endl;
//		cout << "矩形面积为：" << s << endl;
//	}
//};
//
//int main()
//{
//	Shape *p;
//	int temp = 1;
//	while (temp)
//	{
//		int t;
//		cout << "请输入要计算的图形:" << endl;
//		cout << "1.圆形  2.矩形" << endl;
//		cin >> t;
//		if (t == 1)
//		{
//			cout << "请输入半径的长度:" << endl;
//			int r;
//			cin >> r;
//			p = new Circle(r);
//			p->Show();
//			delete p;
//		}
//		if (t == 2)
//		{
//			cout << "请输入矩形的长与宽：" << endl;
//			int a, b;
//			cin >> a >> b;
//			p = new Rectangle(a, b);
//			p->Show();
//			delete p;
//		}
//		cout << "是否继续输入？(Y/N)" << endl;
//		char c = '&';
//		while (c != 'Y'&&c != 'N')
//		{
//			cin >> c;
//			if (c == 'Y')
//				temp = 1;
//			else if (c == 'N')
//				temp = 0;
//			else
//				cout << "输入错误，重新输入！" << endl;
//		}
//	}
//	cout << "总面积:"<<Shape::SumArea << endl;
//	system("pause");
//	return 0;
//}