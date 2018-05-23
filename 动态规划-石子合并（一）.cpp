////#描述
////有n堆石子排成一排，每堆石子有一定的数量。现要将n堆石子并成为一堆。
////合并的过程只能每次将相邻的两堆石子堆成一堆，每次合并花费的代价为这两堆石子的和，
////经过n - 1次合并后成为一堆。求出总的代价最小值。
////输入
////有多组测试数据，输入到文件结束。
////每组测试数据第一行有一个整数n，表示有n堆石子。
////接下来的一行有n（0< n <200）个数，分别表示这n堆石子的数目，用空格隔开
////	输出
////	输出总代价的最小值，占单独的一行
////	样例输入
////	3
////	1 2 3
////	7
////	13 7 8 16 21 4 18
////	样例输出
////	9
////	239
////  与切木棍的题相似 可以对比其中差异，体会区间类题型的异同
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int dp[205][205];//表示区间i~j之间的最小取值
//int a[205];
//int num[205];
//int n;
//
//int solve()
//{
//	for (int i = n;i >= 1;i--)//枚举起点
//		for (int j = i + 1;j <= n;j++)//枚举终点
//		{
//			int k, MIN = INF;
//			int temp;
//			for (k = i;k < j;k++)//枚举中间把i,j分开的k
//			{
//				temp = dp[i][k] + dp[k + 1][j] + num[j] - num[i - 1];//合并两个区间
//				if (MIN > temp)//取i~j区间的最小值
//					MIN = temp;
//			}
//			dp[i][j] = MIN;
//		}
//	return dp[1][n];
//}
//
//
//int main()
//{
//	while (cin>>n)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(a, 0, sizeof(a));
//		memset(num, 0, sizeof(num));
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> a[i];
//			num[i] = num[i - 1] + a[i];
//		}
//		cout << solve() << endl;
//	}
//
////	system("pause");
//	return 0;
//}