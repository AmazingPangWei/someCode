////描述
////ST是一个酷爱炫舞的玩家。TA很喜欢玩QQ炫舞，因此TA也爱屋及乌的喜欢玩跳舞机（Dance Dance Revolution，DDR）。但是TA每天还要努力的学习，因此TA希望每次都保存最多的体力来学习。
////DDR的主要内容是用脚来踩踏板。踏板有4个方向的箭头，用1，2，3，4来代表，如下图所示。
////
////游戏规则如下：
////每首歌曲有一个箭头序列，游戏者必须按照这个序列依次用某一只脚踩相应的踏板。在任何时候，两只脚都不能在同一个踏板上，但可以同时待在中心位置0（一开始游戏的时候，游戏者的双脚都在中心位置0处）。
////每一个时刻，TA必须移动而且只能移动TA的一只脚去踩相应的箭头，而另一只脚不许移动。这样，TA跳DDR的方式可以用一串数字L1L2………Ln来表示。
////其中体力消耗规则如下：
////1、 从中心往任何一个箭头耗费2个单位体力；
////2、 从任何一个箭头移动到相邻箭头耗费3个单位体力（1和3相对，2和4相对）耗费4个单位体力。
////3、 留在原地在踩一下只需要1单位。
////现在炫舞家ST很想学习但是又想玩DDR。因此，TA希望厉害的程序员你可以帮TA编写一个程序计算出TA因该怎样移动他的双脚（即，对于每个箭头，选一只脚去踩它），才能用最少的体力完成给定的舞曲。
////例如，给出22140，总的体力耗费为2 + 1 + 2 + 3 = 8单位。
//
////输入:
//
////输入文件将包括一系列的方向序列。每个方向序列包含一个数字序列。每个输入序列应该是数字1、2、3或4, 每个代表四个方向之一。
////一个值为0的方向序列表示方向的结束序列。和这个值应该被排除在方向序列（每个方向序列输入最多包含10000个数字）。
////输入文件结束为输入序列只有单独的一个0。
//
////输出:
////对于每个方向序列, 输出最少单位的体力消耗值。结果应该是一个整数在单独的一行。任何多余的白空格或空行将不被接受。
////样例输入
////2 3 3 3 3 1 2 0
////3 2 2 1 2 0
////0
////样例输出
////12
////9
//#include <iostream>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int arr[10002];
//int dp[10002][6][6];//i为第i次，移左脚移到j，或者右脚移到k所需的最少单位体力消耗值
//int cost[6][6] =//分别表示中上左下右 移到 中上左下右需要的费用(根据题目)
//{
//	/*{1,2,2,2,2},
//	{0,1,4,3,3},
//	{0,4,1,3,3},
//	{0,3,3,1,4},
//	{0,3,3,4,1}*/
//	{ 0, 2, 2, 2, 2},
//	{INF, 1, 3, 4, 3},
//	{INF, 3, 1, 3, 4},
//	{INF, 4, 3, 1, 3},
//	{INF, 3, 4, 3, 1}
//};
//
//
//
//void Inis(int n)
//{
//	int ans = INF;
//	for (int i = 0;i <= n;i++)
//		for (int j = 0;j <= 4;j++)
//			for (int k = 0;k <= 4;k++)
//				dp[i][j][k] = INF;
//}
//
//
//
//int main()
//{
//	int t;
//	while (cin >> t&&t != 0)
//	{
//		int n = 1;//一共有n个元素
//		arr[1] = t;
//		while (1)
//		{
//			cin >> t;
//			if (t == 0)
//				break;
//			arr[n + 1] = t;
//			n++;
//		}
//		Inis(n);
//		dp[0][0][0] = 0;
//		int ans = INF;
//		for(int i=1;i<=n;i++)//第i次移动
//			for (int j = 0;j <= 4;j++)//不动的一支脚所在的位置
//			{
//				int x = INF, y = INF;
//				for (int k = 0;k <= 4;k++)//动的一支脚所在的位置
//				{
//					if (j + k == 0 || j != k)
//					{
//						x = min(x, dp[i-1][j][k] + cost[k][arr[i]]);
//						y = min(y, dp[i-1][k][j] + cost[k][arr[i]]);
//					}
//					dp[i][j][arr[i]] = dp[i][arr[i]][j] = min(x, y);
//					ans = min(ans, dp[n][j][arr[i]]);
//				}
//			}
//		cout << ans << endl;
//	}
////	system("pause");
//	return 0;
//}