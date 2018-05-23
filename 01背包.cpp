//#include <iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//
//int w[100];
//int v[100];
//int dp[101][101]; //目前处于第i层,剩余可以装W的物品时，最大的价值
//
//void solve(int n) //共n层
//{
//	for (int i = n-1; i >= 0 ; i--)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (w[i] > j)
//				dp[i][j] = dp[i + 1][j];//本层装不下，就直接继承上一层
//			if (w[i] <= j) //能装背包
//			{
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> w[i];
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	solve(n);
//	cout << dp[0][99] << endl;
////	system("pause");
//	return 0;
//}