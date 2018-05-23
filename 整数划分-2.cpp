////资料：https://blog.csdn.net/athenaer/article/details/8265234
////题目：https://nanti.jisuanke.com/t/25093
////设dp[i][j]为将i划分为j个整数的划分数。
////(1) i<j为不可能出现的情况，dp[i][j] = 0；
////(2) 若i = j，有一种情况：i可以划分为i个1之和，dp[i][j] = 1；
////(3) 方法可以分为两类：
////第一类: n 份中不包含 1 的分法，为保证每份都 >= 2，可以先拿出 k 个 1 分
////到每一份，然后再把剩下的 n - k 分成 k 份即可，分法有 : dp[n - k][k]
////第二类 : n 份中至少有一份为 1 的分法，可以先那出一个 1 作为单独的1份，剩
////下的 n - 1 再分成 k - 1 份即可，分法有：dp[n - 1][k - 1]
//#include <iostream>
//using namespace std;
//
//long long dp[301][301];
//long long n, k;
//void solve()
//{
////设dp[i][j]为将i划分为j个整数的划分数。
//	for (long long i = 1; i <= n; i++)
//	{
//		for (long long j = 1; j <= n; j++)
//		{
//			if (i < j)
//				dp[i][j] = 0;
//			else if (i == j)
//				dp[i][j] = 1;
//			else
//			{
//				//有1的情况 + 无1的情况
//				dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j];
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	solve();
//	long long ans = 0;
//	for (long long i = 1; i <= k; i++)
//	{
//		ans += dp[n][i];
//	}
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}