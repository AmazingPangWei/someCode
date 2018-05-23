//#include <iostream>
//
//using namespace std;
//
//class father
//{
//private:
//	int a;
//public:
//	void set(int a)
//	{
//		this->a = a;
//	}
//	void show()
//	{
//		cout << a<<endl;
//	}
//};
//
//class son :public father
//{
//private:
//	int b;
//public:
//	int getb()
//	{
//		return b;
//	}
//	son(int b) :b(b)
//	{
//		set(10);
//	}
//	void print()
//	{
//		cout << b << endl;
//		show();
//	}
//};
//
//int main()
//{
//	son son(1);
//	son.show();
//	son.print();
//	system("pause");
//	return 0;
//}