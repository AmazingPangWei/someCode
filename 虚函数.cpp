//#include <iostream>		// 预处理命令									//2
//using namespace std;		// 使用标准命名空间std							//3
//																	//4
//// 基类																//5
//class A																//6
//{																	//7
//public:																//8
//// 公有函数:															//9
//	virtual void Show() const{ cout << "基类A" << endl; }						//10
//};																	//11
//																	//12
//// 派生类																//13
//class B: public A														//14
//{																	//15
//public:																//16
//// 公有函数:															//17
//	void Show() const{ cout << "派生类B" << endl; }						//18
//};																	//19
//																	//20
//int main(void)				// 主函数main(void)							//21
//{																	//22
//	B obj;				// 定义派生类对象								//23
//	A *p = &obj;			// 定义基类指针指向派生类对象					//24
//	p->Show();			// 调用ShowB()								//25
//																	//26
//	system("PAUSE");		// 调用库函数system( )，输出系统提示信息			//27
//	return 0;				// 返回值0, 返回操作系统						//28
//}	
