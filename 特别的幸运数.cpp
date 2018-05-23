//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//bool judge(int n)
//{
//	int temp = 1;
//	for (int i = 1; i <= n; i = i*10 + 1)
//	{
//		if (i * 4 == n || i*7 == n)
//			return true;
//	}
//	return false;
//}
//
//bool judge2(int n)
//{
//	char a[1000];
//	_itoa(n, a, 10);
//	for (int i = 0; i < strlen(a); i++)
//		if (a[i] != '4' && a[i] != '7')
//			return false;
//	return true;
//}
//
//int main()
//{
//	int a, b;
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		int num = 0;
//		cin >> a >> b;
//		for (int i = a; i <= b; i++)
//			if (judge(i) || judge2(i))
//				num++;
//		cout << num << endl;
//	}
////	system("pause");
//	return 0;
//}