////描述
////小珂最近收集了些邮票，他想把其中的一些给他的好朋友小明。每张邮票上都有分值，他们想把这些邮票分成两份，并且使这两份邮票的分值和相差最小（就是小珂得到的邮票分值和与小明的差值最小），现在每张邮票的分值已经知道了，他们已经分好了，你知道最后他们得到的邮票分值和相差多少吗？
////输入
////第一行只有一个整数m（m <= 1000), 表示测试数据组数。
////接下来有一个整数n(n <= 1000)，表示邮票的张数。
////然后有n个整数Vi(Vi <= 100)，表示第i张邮票的分值。
////输出
////输出差值，每组输出占一行。
////样例输入
////2
////5
////2 6 5 8 9
////3
////2 1 5
////样例输出
////0
////2
//
////对于该题，可以将邮票总和除以2，转化为01背包问题
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int dp[100005];//将二维数组压缩为滚动数组
//int v[1005];
//int n, m;
//int sum, k;
//
//int solve()
//{
//	for(int i=1;i<=n;i++)
//		for (int j = k;j >= 0;j--)
//		{
//			if(j>=v[i])
//				dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
//		}
//	return dp[k];//获得小于sum/2的最大值
//}
//
//int main()
//{
//	scanf("%d",&m);
//	while (m--)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(v, 0, sizeof(v));
//		sum = 0;
//		scanf("%d", &n);
//		for (int i = 1;i <= n;i++)
//		{
//			scanf("%d", &v[i]);
//			sum += v[i];
//		}
//		k = sum / 2;
//		printf("%d\n", sum - solve()* 2);
//		
//	}
////	system("pause");
//	return 0;
//}