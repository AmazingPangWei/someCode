//#include <iostream>		// Ԥ��������									//2
//using namespace std;		// ʹ�ñ�׼�����ռ�std							//3
//																	//4
//// ����																//5
//class A																//6
//{																	//7
//public:																//8
//// ���к���:															//9
//	virtual void Show() const{ cout << "����A" << endl; }						//10
//};																	//11
//																	//12
//// ������																//13
//class B: public A														//14
//{																	//15
//public:																//16
//// ���к���:															//17
//	void Show() const{ cout << "������B" << endl; }						//18
//};																	//19
//																	//20
//int main(void)				// ������main(void)							//21
//{																	//22
//	B obj;				// �������������								//23
//	A *p = &obj;			// �������ָ��ָ�����������					//24
//	p->Show();			// ����ShowB()								//25
//																	//26
//	system("PAUSE");		// ���ÿ⺯��system( )�����ϵͳ��ʾ��Ϣ			//27
//	return 0;				// ����ֵ0, ���ز���ϵͳ						//28
//}	
