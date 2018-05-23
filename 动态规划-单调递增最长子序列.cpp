//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int dp[10005];
//int n;
//
//int solve(string str)
//{
//	dp[0] = 1;
//	int MAX = 1;
//	for (int i = 1;i < str.size();i++)
//	{
//		dp[i] = 1;
//		for (int j = 0;j < i;j++)
//		{
//			if (str[i] > str[j] && dp[i] < dp[j] + 1)
//			{
//				dp[i] = dp[j] + 1;
//				if (MAX < dp[i])
//					MAX = dp[i];
//			}
//		}
//	}
//	return MAX;
//}
//
//int main()
//{
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		string str;
//		cin >> str;
//		cout << solve(str) << endl;
//	}
////	system("pause");
//	return 0;
//}