//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Student
//{
//private:
//	char name[18];
//	int mathScore, englishScore, num;
//	static int mathTotalScore, englishTotalScore, count;
//public:
//	Student(char *nm, int nu, int math, int english)
//	{
//		strcpy(name, nm);
//		num = nu;
//		mathScore = math;
//		englishScore = english;
//		mathTotalScore += math;
//		englishTotalScore += english;
//		count++;
//	}
//	void ShowBase()
//	{
//		cout << "����"<<name << endl
//			<< "ѧ��"<<num << endl
//			<< "��ѧ�ɼ�"<<mathScore << endl
//			<< "Ӣ��ɼ�"<<englishScore << endl;
//	}
//	static void ShowStatic()
//	{
//		cout << "����Ϊ" << count << endl
//			<< "����ѧ�ɼ�" << mathTotalScore << endl
//			<< "��Ӣ��ɼ�" << englishTotalScore << endl;
//	}
//};
//
//int Student::englishTotalScore = 0;
//int Student::mathTotalScore = 0;
//int Student::count = 0;
//
//int main()
//{
//	Student stu1("����", 2016112202, 75, 80), stu2("·�˼�", 2016112280, 60, 60);
//	stu1.ShowBase();
//	cout << endl;
//	stu2.ShowBase();
//	cout << endl;
//	Student:: ShowStatic();
//	system("pause");
//}