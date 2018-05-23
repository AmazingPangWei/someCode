////ctest有n个苹果，要将它放入容量为v的背包。给出第i个苹果的大小和价钱，求出能放入背包的苹果的总价钱最大值。
////
////
////
////输入
////有多组测试数据，每组测试数据第一行为2个正整数，分别代表苹果的个数n和背包的容量v，n、v同时为0时结束测试，
////此时不输出。接下来的n行，每行2个正整数，用空格隔开，分别代表苹果的大小c和价钱w。
////所有输入数字的范围大于等于0，小于等于1000。
////输出
////对每组测试数据输出一个整数，代表能放入背包的苹果的总价值。
////样例输入
////3 3
////1 1
////2 1
////3 1
////0 0
////样例输出
////2
//
////dp[i][j]=max{dp[i+1][j],dp[i+1][j-w[i]]+p[i]}  dp[i+1][j]表示不放入苹果,后表示放入苹果
////上式表示目前处于第i层，还可以放j的苹果
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//
//int dp[1000][1000];//表示目前处于第i层，还可以放容量j的苹果时，最大的总价值
//int w[1000];//容量
//int p[1000];//价钱
//int v, n;
//
//int solve()
//{
//	for(int i=n;i>=1;i--)//从第n层开始逆推
//		for (int j = 0;j <= v;j++)//枚举重量
//		{
//			if (i == n)
//				dp[i][j] = 0;//第n层初始为0  当j>=w[i]的时候把p[i]装入背包
//			else
//				dp[i][j] = dp[i + 1][j];
//			if (j >= w[i])
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + p[i]);
//		}
//	return dp[1][v];
//}
//
//int main()
//{
//	while (scanf("%d%d", &n, &v) && v != 0 && n != 0)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(w, 0, sizeof(w));
//		memset(p, 0, sizeof(p));
//		for (int i = 1;i <= n;i++)
//			scanf("%d%d", &w[i], &p[i]);
//		printf("%d\n", solve());
//	}
//
//}