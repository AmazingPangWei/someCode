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
//		cout << "姓名"<<name << endl
//			<< "学号"<<num << endl
//			<< "数学成绩"<<mathScore << endl
//			<< "英语成绩"<<englishScore << endl;
//	}
//	static void ShowStatic()
//	{
//		cout << "人数为" << count << endl
//			<< "总数学成绩" << mathTotalScore << endl
//			<< "总英语成绩" << englishTotalScore << endl;
//	}
//};
//
//int Student::englishTotalScore = 0;
//int Student::mathTotalScore = 0;
//int Student::count = 0;
//
//int main()
//{
//	Student stu1("庞玮", 2016112202, 75, 80), stu2("路人甲", 2016112280, 60, 60);
//	stu1.ShowBase();
//	cout << endl;
//	stu2.ShowBase();
//	cout << endl;
//	Student:: ShowStatic();
//	system("pause");
//}