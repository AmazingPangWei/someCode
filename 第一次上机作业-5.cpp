//#include <iostream>
//using namespace std;
//
//class People
//{
//protected:
//	int age;
//	float height, weight;
//	static int num;
//public:
//	People(int a, float h, float w) :age(a), height(h), weight(w)
//	{
//		num++;
//	}
//	void Eatting()
//	{
//		weight++;
//	}
//	void Sporting()
//	{
//		height++;
//	}
//	void Sleeping()
//	{
//		age++;
//		weight++;
//		height++;
//	}
//	void Show()
//	{
//		cout << "����Ϊ" << weight << "��" << endl
//			 << "���Ϊ" << height << "����" << endl
//			 << "����Ϊ" << age << "��" << endl;	 
//	}
//	static void ShowNum()
//	{
//		cout << "����Ϊ" << num << "��" << endl;
//	}
//};
//
//int People::num = 0;
//
//int main()
//{
//	People obj1(8, 120, 60);			// �������
//	obj1.Eatting();					// ��ʳ
//	obj1.Sporting();					// �˶�
//	obj1.Sleeping();					// ˯��
//	obj1.Show();						// ��ʾ��Ϣ
//
//	cout << endl;
//
//	People obj2(18, 170, 108);			// �������
//	obj2.Eatting();					// ��ʳ
//	obj2.Sporting();					// �˶�
//	obj2.Sleeping();					// ˯��
//	obj2.Show();						// ��ʾ��Ϣ
//
//	People::ShowNum();			// ��ʾ����
//	system("pause");
//}