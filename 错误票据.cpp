//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int a[100100];
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	int t = 0;
//	int temp = 0;
//	int MAX = 0;
//	int MIN = 100010;
//	string s[101];
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, s[i]);
//	}
//	//处理多余空格
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < s[i].size(); j++)
//		{
//			if (s[i][j] == ' ' && temp!=0)
//			{
//				a[temp]++;
//				MAX = max(MAX, temp);
//				MIN = min(MIN, temp);
//				temp = 0;
//				t++;
//				continue;
//			}
//			else
//			{
//				temp = temp * 10 + (s[i][j] - '0');
//			}
//		}
//		a[temp]++;
//		MAX = max(MAX, temp);
//		MIN = min(MIN, temp);
//		temp = 0;
//		t++;
//	}
//	int ID_1, ID_2;
//	for (int i = MIN; i <= MAX; i++)
//	{
//		if (a[i] == 2)
//			ID_2 = i;
//		else if (a[i] == 0)
//			ID_1 = i;
//	}
//	cout << ID_1 << ' ' << ID_2 << endl;
////	system("pause");
//	return 0;
//}