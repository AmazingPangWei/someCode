//#include <iostream>
//#include <string>
//using namespace std;
//
//int a[1000];
//int num()//ÅÐ¶ÏÎ»Êý
//{
//	for (int i = 999; i >= 0; i--)
//		if (a[i] != 0)
//			return i;
//}
//void solve(int n)
//{
//	int m = num();
//	for (int i = 0; i <= m; i++)
//		a[i] *= n;
//	for (int i = 0; i <= m; i++)
//		if (a[i] >= 10)
//		{
//			a[i + 1] = a[i + 1] + a[i] / 10;
//			a[i] %= 10;
//		}
//}
//int main()
//{
//	a[0] = 1;
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//		solve(i);
//	int m = num();
//	for (int i = m; i >= 0; i--)
//		cout << a[i];
//	cout << endl;
////	system("pause");
//	return 0;
//}