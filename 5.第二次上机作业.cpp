//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person
//{
//private:
//	char *name;
//	int age;
//	char sex[5];
//public:
//	Person(char *Name, int Age, char* sex)
//	{
//		name = new char[strlen(Name) + 1];
//		strcpy(this->sex, sex);
//		strcpy(name, Name);
//		age = Age;
//	}
//	~Person()
//	{
//		delete[]name;
//	}
//	void Show()
//	{
//		cout << "name:" << name << endl
//			<< "age:" << age << endl
//			<< "sex:" << sex << endl;
//	}
//};
//
//class Teacher:public Person
//{
//protected:
//	char *title;
//public:
//	Teacher(char *Title, char *Name, int Age, char* Sex) :Person(Name, Age, Sex)
//	{
//		title = new char[strlen(Title) + 1];
//		strcpy(title, Title);
//	}
//	~Teacher() 
//	{
//		delete[]title;
//	}
//	void Show()
//	{
//		cout << "title:" << title << endl;
//		Person::Show();
//	}
//};
//
//class Cadre :public Person
//{
//protected:
//	char *post;
//public:
//	Cadre(char *Post, char *Name, int Age, char *Sex) :Person(Name, Age, Sex)
//	{
//		post = new char[strlen(Post) + 1];
//		strcpy(post, Post);
//	}
//	~Cadre()
//	{
//		delete[]post;
//	}
//	void show()
//	{
//		cout << "post:" << post << endl;
//		Person::Show();
//	}
//
//};
//
//class TeacherCadre:public Teacher, public Cadre
//{
//private:
//	float wages;
//public:
//	TeacherCadre(float Wages, char *Post, char *Title, char *Name, int age, char * Sex) :wages(Wages), Teacher(Post, Name, age, Sex), Cadre(Title, Name, age, Sex){}
//	void Show()
//	{
//		Person::Show();
//		cout << "title:" << title << endl;
//		cout << "post:" << post << endl;
//		cout << "wages:" << wages << endl;
//	}
//};
//
//int main()
//{
//	Teacher objTeacher("教授","文冠杰", 48, "男");						// 定义对象
//	Cadre objCadre("院长", "周杰", 56, "男");							// 定义对象
//	TeacherCadre objTeacherCadre(6890, "教授", "院长", "李靖", 50, "女");	// 定义对象
//
//	objTeacher.Show();					// 显示相关信息
//	cout << endl;
//	objCadre.Show();						// 显示相关信息
//	cout << endl;
//	objTeacherCadre.Show();			// 显示相关信息
//
//	system("pause");
//	return 0;
//}