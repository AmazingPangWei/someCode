//
////dp[i][j]:对于i,j:i为层数,j为0时表示不飞,j=1时表示飞
////dp[0][1] = dp[1][1] = 0;
////dp[0][0] = a[0];
////dp[1][0] = a[1];
////dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + a[i];
////dp[i][1] = min(dp[i - 1][0], dp[i - 2][0]);
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[10002][2];
//int a[10002];
//int n;
//
//int solve()
//{
//	dp[0][1] = 0;
//	dp[1][1] = 0;
//	dp[0][0] = a[0];
//	dp[1][0] = a[1];
//	for (int i = 2;i < n;i++)
//	{
//		dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + a[i];
//		dp[i][1] = min(dp[i - 1][0], dp[i - 2][0]);
//	}
//	return min(dp[n - 1][1], dp[n - 1][0]);
//}
//
//int main()
//{
//	while (cin >> n)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(a, 0, sizeof(a));
//		for (int i = 0;i < n;i++)
//			cin >> a[i];
//		cout << solve() << endl;
//	}
////	system("pause");
//	return 0;
//}