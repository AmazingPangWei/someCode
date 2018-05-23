//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct student
//{
//	char num[15];
//	int a;
//	int b;
//};
//
//int main()
//{
//	int n, m, i;
//	cin >> n;
//	student *p;
//	p = new student[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i].num >> p[i].a >> p[i].b;
//	cin >> m;
//	int *q = new int[m];
//	for (i = 0;i < m;i++)
//		cin >> q[i];
//	for (i = 0;i < m;i++)
//		for (int j = 0;j < n;j++)
//			if (p[j].a == q[i])
//				cout << p[j].num << ' ' << p[j].b<<endl;
//	delete[]p;
//	delete[]q;
//	system("pause");
//
//	return 0;
//}