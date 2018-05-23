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
//		cout << "体重为" << weight << "斤" << endl
//			 << "身高为" << height << "厘米" << endl
//			 << "年龄为" << age << "岁" << endl;	 
//	}
//	static void ShowNum()
//	{
//		cout << "人数为" << num << "个" << endl;
//	}
//};
//
//int People::num = 0;
//
//int main()
//{
//	People obj1(8, 120, 60);			// 定义对象
//	obj1.Eatting();					// 进食
//	obj1.Sporting();					// 运动
//	obj1.Sleeping();					// 睡眠
//	obj1.Show();						// 显示信息
//
//	cout << endl;
//
//	People obj2(18, 170, 108);			// 定义对象
//	obj2.Eatting();					// 进食
//	obj2.Sporting();					// 运动
//	obj2.Sleeping();					// 睡眠
//	obj2.Show();						// 显示信息
//
//	People::ShowNum();			// 显示人数
//	system("pause");
//}