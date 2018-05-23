////描述
////给定一整型数列{ a1,a2...,an }，找出连续非空子串{ ax,ax + 1,...,ay }，使得该子序列的和最大，其中，1 <= x <= y <= n。
////输入
////第一行是一个整数N(N <= 10)表示测试数据的组数）
////每组测试数据的第一行是一个整数n表示序列中共有n个整数，随后的一行里有n个整数I(-100 = <I <= 100)，表示数列中的所有元素。(0<n <= 1000000)
////	输出
////	对于每组测试数据输出和最大的连续子串的和。
////	样例输入
////	1
////	5
////	1 2 - 1 3 - 2
//
////状态转移方程   dp[i]=max{dp[i-1]+x[i],x[i]};
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int dp[1000002];//前n项最大的子串和
//int a[1000002];
//int n;
//
//int solve()
//{
//	dp[0] = a[0];
//	int MAX = a[0];
//	for (int i = 1;i < n;i++)
//	{
//		dp[i] = max(dp[i - 1] + a[i], a[i]);
//		MAX = max(dp[i], MAX);
//	}
//	return MAX;
//}
//
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	while (m--)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(a, 0, sizeof(a));
//		scanf("%d", &n);
//		for (int i = 0;i < n;i++)
//			scanf("%d", &a[i]);
//		printf("%d\n", solve());
//	}
//	return 0;
//}