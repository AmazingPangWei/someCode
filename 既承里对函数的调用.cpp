//#include <iostream>						// Ԥ��������
//using namespace std;						// ʹ�ñ�׼�����ռ�std
//
//class A
//{
//protected:
//	// ���ݳ�Ա:
//	int a;								// ���ݳ�Ա
//
//public:
//	// ���к���:
//	A(int x) : a(x) { }						// ���캯��
//	void Show() const { cout << a << endl; }	// ��ʾaֵ֮
//};
//
//class B
//{
//protected:
//	// ���ݳ�Ա:
//	int b;								// ���ݳ�Ա
//
//public:
//	// ���к���:
//	B(int x) : b(x) { }						// ���캯��
//	void Show() const { cout << b << endl; }	// ��ʾa��bֵ֮
//};
//
//class C : public A, public B
//{
//public:
//	// ���к���:
//	C(int x, int y) : A(x), B(y) { }				// ���캯��
//	void Show() const						// ��ʾbֵ֮
//	{
//		cout << a << "," << b << endl;
//	}
//};
//
//int main(void)								// ������main(void)
//{
//	C obj(5, 18);							// �������
//	obj.Show();							// ��ʾ�����Ϣ
//	obj.A::Show();						// ��ʾ�����Ϣ
//	obj.B::Show();						// ��ʾ�����Ϣ
//
//	system("PAUSE");            			// ���ÿ⺯��system( )�����ϵͳ��ʾ��Ϣ
//	return 0;                    			// ����ֵ0, ���ز���ϵͳ
//}
