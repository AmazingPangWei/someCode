//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//	Shape() {}
//	~Shape() {}
//	virtual float GetPerim() = 0;//纯虚函数
//};
//
//class Circle :public Shape//Circle，继承于Shape
//{
//private:
//	float r;
//	float c;
//public:
//	Circle(float r)
//	{
//		this->r = r;
//	}
//	float GetPerim()
//	{
//		c = 3.14159 * 2 * r;
//		return c;
//	}
//};
//
//class Rectangle :public Shape//Rectangele类，继承于Shape类
//{
//private:
//	float len, width;
//public:
//	Rectangle(float len, float width)
//	{
//		this->len = len;
//		this->width = width;
//	}
//	float GetPerim()//对纯虚函数的改写
//	{
//		return len*width;
//	}
//};
//
//
//int main()
//{
//	Shape *p;
//	Circle circle(3);
//	p = &circle;//通过指针访问Circle类
//	cout << "圆的周长为："
//		 << p->GetPerim() << endl;
//
//	Rectangle rectangle(10.4, 20.12);
//	Shape & RE = rectangle;//通过引用访问Rectangle类
//	cout << "矩形的周长为："
//		 << RE.GetPerim() << endl;
//
//	system("pause");
//	return 0;
//}