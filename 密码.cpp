//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//string ans[100001];
//void innt()
//{
//	for (int i = 0; i < 100001; i++)
//		ans[i].clear();
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		string s;
//		cin >> s;
//		innt();
//		if (n == 1)
//		{
//			cout << s << endl;
//			continue;
//		}
//		else if (n==2)
//		{
//			for (int i = 0; i < s.size(); i += 2)
//				cout << s[i];
//			for (int i = 1; i < s.size(); i += 2)
//				cout << s[i];
//			cout << endl;
//			continue;
//		}
//		int flag = 0;//0为下，1为下
//		int index = 0;//目前的下标
//		for (int i = 0; i < s.size(); i++)
//		{
//				if (!flag)//向下
//				{
//					ans[index] += s[i];
//					index++;
//					if (index == n)
//					{
//						flag = 1;
//						index = n-2;
//					}
//				}
//				else//向上
//				{
//					ans[index] += s[i];
//					index--;
//					if (index == -1)
//					{
//						flag = 0;
//						index = 1;
//					}
//				}
//		}
//		for (int i = 0; i < n; i++)
//			cout << ans[i];
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}