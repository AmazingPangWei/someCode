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
//		cout << "�뾶Ϊ��" << r << endl;
//		cout << "��Բ�İ뾶Ϊ��" << s << endl;
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
//		cout << "���γ�Ϊ��" << a << ' ' << "���ο�Ϊ��" << b << endl;
//		cout << "�������Ϊ��" << s << endl;
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
//		cout << "������Ҫ�����ͼ��:" << endl;
//		cout << "1.Բ��  2.����" << endl;
//		cin >> t;
//		if (t == 1)
//		{
//			cout << "������뾶�ĳ���:" << endl;
//			int r;
//			cin >> r;
//			p = new Circle(r);
//			p->Show();
//			delete p;
//		}
//		if (t == 2)
//		{
//			cout << "��������εĳ����" << endl;
//			int a, b;
//			cin >> a >> b;
//			p = new Rectangle(a, b);
//			p->Show();
//			delete p;
//		}
//		cout << "�Ƿ�������룿(Y/N)" << endl;
//		char c = '&';
//		while (c != 'Y'&&c != 'N')
//		{
//			cin >> c;
//			if (c == 'Y')
//				temp = 1;
//			else if (c == 'N')
//				temp = 0;
//			else
//				cout << "��������������룡" << endl;
//		}
//	}
//	cout << "�����:"<<Shape::SumArea << endl;
//	system("pause");
//	return 0;
//}