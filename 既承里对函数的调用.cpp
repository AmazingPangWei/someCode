//#include <iostream>						// 预处理命令
//using namespace std;						// 使用标准命名空间std
//
//class A
//{
//protected:
//	// 数据成员:
//	int a;								// 数据成员
//
//public:
//	// 公有函数:
//	A(int x) : a(x) { }						// 构造函数
//	void Show() const { cout << a << endl; }	// 显示a之值
//};
//
//class B
//{
//protected:
//	// 数据成员:
//	int b;								// 数据成员
//
//public:
//	// 公有函数:
//	B(int x) : b(x) { }						// 构造函数
//	void Show() const { cout << b << endl; }	// 显示a与b之值
//};
//
//class C : public A, public B
//{
//public:
//	// 公有函数:
//	C(int x, int y) : A(x), B(y) { }				// 构造函数
//	void Show() const						// 显示b之值
//	{
//		cout << a << "," << b << endl;
//	}
//};
//
//int main(void)								// 主函数main(void)
//{
//	C obj(5, 18);							// 定义对象
//	obj.Show();							// 显示相关信息
//	obj.A::Show();						// 显示相关信息
//	obj.B::Show();						// 显示相关信息
//
//	system("PAUSE");            			// 调用库函数system( )，输出系统提示信息
//	return 0;                    			// 返回值0, 返回操作系统
//}
