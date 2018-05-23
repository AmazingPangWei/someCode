//#include <iostream>
//using namespace std;
//
//struct BCJ
//{
//	int win = 0;
//	int fail = 0;
//	int equality = 0;
//	int b = 0;
//	int c = 0;
//	int j = 0;
//	int max;
//};
//
//BCJ A, B;
//
//void fun(char c, char d)
//{
//	if (c == 'J'&&d == 'B')
//	{
//		A.j++;
//		A.win++;
//		B.fail++;
//	}
//	else if (d == 'J'&&c == 'B')
//	{
//		B.j++;
//		B.win++;
//		A.fail++;
//	}
//	else if (c == 'B'&&d == 'C')
//	{
//		A.b++;
//		A.win++;
//		B.fail++;
//	}
//	else if (d == 'B'&&c == 'C')
//	{
//		B.b++;
//		B.win++;
//		A.fail++;
//	}
//	else if (c == 'C'&&d == 'J')
//	{
//		A.c++;
//		A.win++;
//		B.fail++;
//	}
//	else if (d == 'C'&&c == 'J')
//	{
//		B.c++;
//		B.win++;
//		A.fail++;
//	}
//	else
//	{
//		A.equality++;
//		B.equality++;
//	}
//}
//
//void print(BCJ C)
//{
//	if (C.max == C.b)
//		cout << 'B';
//	else if (C.max == C.c)
//		cout << 'C';
//	else
//		cout << 'J';
//}
//
//void max(BCJ *C)
//{
//	(*C).max = (*C).b;
//	if ((*C).max < (*C).c)
//		(*C).max = (*C).c;
//	if ((*C).max < (*C).j)
//		(*C).max = (*C).j;
//}
//
//int main()
//{
//	int n, i;
//	char c, d;
//	cin >> n;
//	for (i = 0;i < n;i++) 
//	{
//		cin >> c >> d;
//		fun(c, d);
//	}
//	max(&A);
//	max(&B);
//	cout << A.win << ' ' << A.equality << ' ' << A.fail << endl;
//	cout << B.win << ' ' << B.equality << ' ' << B.fail << endl;
//	print(A);
//	cout << ' ';
//	print(B);
//	cout << endl;
//	//cout << A.b << ' ' << A.c << ' ' << A.j << endl << A.max<<endl;
//	//cout << B.b << ' ' << B.c << ' ' << B.j << endl <<B.max<<endl;
//	system("pause");
//	return 0;
//}