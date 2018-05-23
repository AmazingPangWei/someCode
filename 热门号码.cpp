//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//string str[50000];
//long long b[50000];
//map<long long, int > ans;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int a[256];
//	for (int i = 'A'; i <= 'C'; i++)
//		a[i] = 2;
//	for (int i = 'D'; i <= 'F'; i++)
//		a[i] = 3;
//	for (int i = 'G'; i <= 'I'; i++)
//		a[i] = 4;
//	for (int i = 'J'; i <= 'L'; i++)
//		a[i] = 5;
//	for (int i = 'M'; i <= 'O'; i++)
//		a[i] = 6;
//	for (int i = 'P'; i <= 'S'; i++)
//		a[i] = 7;
//	for (int i = 'T'; i <= 'V'; i++)
//		a[i] = 8;
//	for (int i = 'W'; i <= 'Z'; i++)
//		a[i] = 9;
//
//	for (int i = 0; i < n; i++)
//		cin >> str[i];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> b[i];
//		ans[b[i]] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < str[i].size(); j++)
//			sum = sum * 10 + (a[str[i][j]]);
//		for(int j=0;j<m;j++)
//			if (sum == b[j])
//			{
//				ans[b[j]]++;
//				break;
//			}
//	}
//	for (int j = 0; j < m; j++)
//		cout << ans[b[j]] << endl;
//
////	system("pause");
//	return 0;
//}