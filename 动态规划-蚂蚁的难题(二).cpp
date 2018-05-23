////已知有n种食材需要搬走，这些食材从1到n依次排成了一个圈。小蚂蚁对每种食材都有一个喜爱程度值Vi，当然，如果Vi小于0的时候，表示蚂蚁讨厌这种食材。因为马上就要下雨了，所以蚂蚁只能搬一次，但是能够搬走连续一段的食材。时间紧急，你快帮帮小蚂蚁吧，让它搬走的食材喜爱值和最大。
////
////输入
////有多组测试数据（以EOF结尾）。
////每组数据有两行，第一行有一个n，表示有n种食材排成了一个圈。（1 <= n <= 50000)
////第二行分别有n个数，代表蚂蚁对第n种食材的喜爱值Vi。(-10 ^ 9 <= Vi <= 10 ^ 9)
////输出
////输出小蚂蚁能够搬走的食材的喜爱值总和的最大。
////样例输入
////3
////3 - 1 2
////5
////- 8 5 - 1 3 - 9
////样例输出
////5
////7
//
////与子串和相似  可以用链表来解决
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cstdlib>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//long long  n;
//long long a[50005];
//long long sum;
//long long solve()
//{
//	long long temp=0;
//	long long MAX = -INF;
//	long long MIN = INF;
//	for (int i = 1;i <= n;i++)
//	{
//		temp += a[i];
//		if (temp > MAX)
//			MAX = temp;
//		if (temp < 0)
//			temp = 0;
//	}
//	for (int i = 1;i <= n;i++)
//	{
//		temp += a[i];
//		if (temp < MIN)
//			MIN = temp;
//		if (temp > 0)
//			temp = 0;
//	}
//	return max(MAX, sum - MIN);
//}
//
//int main()
//{
//	while (cin>>n)
//	{
//		sum = 0;
//		memset(a, 0, sizeof(a));
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> a[i];
//			sum += a[i];
//		}
//		cout << solve() << endl;
//	}
////	system("pause");
//	return 0;
//}