//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//	Shape() {}
//	~Shape() {}
//	virtual float GetPerim() = 0;//���麯��
//};
//
//class Circle :public Shape//Circle���̳���Shape
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
//class Rectangle :public Shape//Rectangele�࣬�̳���Shape��
//{
//private:
//	float len, width;
//public:
//	Rectangle(float len, float width)
//	{
//		this->len = len;
//		this->width = width;
//	}
//	float GetPerim()//�Դ��麯���ĸ�д
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
//	p = &circle;//ͨ��ָ�����Circle��
//	cout << "Բ���ܳ�Ϊ��"
//		 << p->GetPerim() << endl;
//
//	Rectangle rectangle(10.4, 20.12);
//	Shape & RE = rectangle;//ͨ�����÷���Rectangle��
//	cout << "���ε��ܳ�Ϊ��"
//		 << RE.GetPerim() << endl;
//
//	system("pause");
//	return 0;
//}