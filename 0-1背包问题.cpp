//#include <iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//int n, c;
//int w[1000];
//int v[1000];
//int dp[1000][1000];//第i层，剩余j的重量时的最大价值
//int vis[1000][1000];
//int a[1000];//存储是否放入背包
//int ans = 0;
//
//void solve()
//{
//	for(int i=n-1;i>=0;i--)
//		for (int j = 0; j <= c; j++)
//		{	
//			if (j >= w[i])
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
//				vis[i][j] = 1;
//			}
//			else
//				dp[i][j] = dp[i + 1][j];
//		}
//}
//
//int main()
//{
//	cin >> n >> c;
//	for (int i = 0; i < n; i++)
//		cin >> w[i];
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	solve();
//	cout << dp[0][c] << endl;
//	int i = 0, j = c;
//	while (i != n)
//	{
//		if (dp[i][j] == dp[i + 1][j - w[i]] + v[i])
//		{
//			cout << "1 ";
//			j = j - w[i];
//		}
//		else
//			cout << "0 ";
//		i++;
//	}
//	
////	system("pause");
//	return 0;
//}