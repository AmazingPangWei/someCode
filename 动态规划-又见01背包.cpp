////有n个重量和价值分别为wi 和 vi 的 物品，从这些物品中选择总重量不超过 W
////的物品，求所有挑选方案中物品价值总和的最大值。
////1 <= n <= 100
////1 <= wi <= 10 ^ 7
////1 <= vi <= 100
////1 <= W <= 10 ^ 9
////输入
////多组测试数据。
////每组测试数据第一行输入，n 和 W ，接下来有n行，每行输入两个数，代表第i个物品的wi 和 vi。
////输出
////满足题意的最大价值，每组测试数据占一行。
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//
//int n, W;
//int v[101];
//int dp[100001];//放第i个物品,剩余价值为j时的最小质量
//int w[101];
//int sum;
//
////dp[i]=min(dp[i-1],dp[i-w[i]]+v[i])  价值相同的情况下，重量尽量小
//
//int solve()
//{
//	dp[0] = 0;//价值为0时，重量为0
//	for(int i=1;i<=n;i++)
//		for (int j = sum;j>=v[i];j--)
//		{
//				dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
//		}
//
//	while (dp[sum] > W)
//		sum--;
//	return sum;
//}
//
//int main()
//{
//	while (cin >> n >> W)
//	{
//		memset(dp, 0x3f, sizeof(dp));
//		memset(v, 0, sizeof(v));
//		memset(w, 0, sizeof(w));
//		sum = 0;
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> w[i] >> v[i];
//			sum += v[i];
//		}
//		cout << solve() << endl;
//	}
////	system("pause");
//	return 0;
//}