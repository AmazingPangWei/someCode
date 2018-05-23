////输入
////第一行：N M(1≤N M≤20 0≤Xij≤500(i = 1, 2„.N, j = 1, 2„, M)
////)表示沙漠是一个N*M的矩形区域
////接下来有N行：每行有M个正整数，Xi1 Xi2 ……Xim 表示各位置中的虫子数（单个空格隔开）
////假设“KK”只能向右走或向下走。
////输出
////输出有一个整数， 表示“KK”吃掉最多的虫子数。
////样例输入
////3 4
////3 1 2 8
////5 3 4 6
////1 0 2 3
////样例输出
////24
//
////dp[i][j]=max{dp[i+1][j],dp[i][j+1]} 从1，1到N,M
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[30][30];
//int dp[30][30];//dp[i][j]表示吃的最大虫数
//int n, m;
//int solve()
//{
//	for (int i = 1;i <= n;i++)
//		dp[1][i] = dp[1][i - 1] + a[1][i];
//	for (int i = 1;i <= m;i++)
//		dp[i][1] = dp[i - 1][1] + a[i][1];
//	for(int i=2;i<=n;i++)
//		for (int j = 2;j <= m;j++)
//		{
//			dp[i][j] = a[i][j] + max(dp[i][j - 1], dp[i - 1][j]);
//		}
//	return dp[n][m];
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1;i <= n;i++)
//		for (int j = 1;j <= m;j++)
//			cin >> a[i][j];
//	cout << solve() << endl;
//	system("pause");
//	return 0;
//}