//#include <iostream>
//using namespace std;
//
//class Shape
//{	
//public:
//	Shape() {}
//	~Shape() {}
//	virtual void Show()  = 0;
//	static float SumArea;
//};
//
//float Shape::SumArea = 0;
//
//class Circle:public Shape
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
//		cout << "�뾶Ϊ��" << r << endl;
//	}
//	void ShowArea()
//	{
//		cout << "��Բ�İ뾶Ϊ��" << s << endl;
//	}
//};
//
//class Rectangle:public Shape
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
//		cout << "���γ�Ϊ��" << a <<' '<< "���ο�Ϊ��" << b << endl;
//	}
//	void ShowArea()
//	{
//		cout << "�������Ϊ��" << s << endl;
//	}
//};
//
//int main()
//{
//	Circle C(2);
//	Rectangle R(2, 1);
//	Shape *p;
//	p = &C;
//	p->Show();
//	C.ShowArea();
//
//	p = &R;
//	p->Show();
//	R.ShowArea();
//
//	cout << Shape::SumArea << endl;
//	system("pause");
//	return 0;
//}