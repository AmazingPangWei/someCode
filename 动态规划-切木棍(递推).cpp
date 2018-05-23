///*
//Sample Input
//100
//3
//25 50 75
//10
//4
//4 5 7 8
//0
//Sample Output
//The minimum cutting is 200.
//The minimum cutting is 22.
//题意：
//
//你的任务是替一家叫Analog Cutting Machinery (ACM)的公司切割木棍。
//切割木棍的成本是根据木棍的长度而定。 而且切割木棍的时候每次只切一段。
//
//很显然的，不同切割的顺序会有不同的成本。 例如：
//有一根长10公尺的木棍必须在第2、4、7公尺的地方切割。
//这个时候就有几种选择了。你可以选择先切2公尺的地方，
//然后切4公尺的地方，最后切7公尺的地方。这样的选择其成本为：10+8+6=24。
//因为第一次切时木棍长10公尺，第二次切时木棍长8公尺，第三次切时木棍长6公尺。
//但是如果你选择先切4公尺的地方，然后切2公尺的地方，最后切7公尺的地方，
//其成本为：10+4+6=20，这成本就是一个较好的选择。
//
//你的老板相信你的电脑能力一定可以找出切割一木棍所需最小的成本。
//
//思路：典型的动态规划题目，有点像矩阵链乘问题，
//找到状态转移公式就好了dp[i][j]=min{dp[i][k]+dp[k][j]+len[j]-len[i]|i<k<j}*/
//#include <iostream>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int dp[100][100];//i~j表示从i切到j所需最小费用
//int num[100];    //储存切割的结点位置
//
//int main()
//{
//	int n, len;
//	cin >> len >> n;
//	for (int i = 1;i <= n;i++)
//		cin >> num[i];
//	num[0] = 0;
//	num[n + 1] = len;
//	for (int i = n + 1;i >= 0;i--)        //枚举起点 逆序枚举    
//		for (int j = i + 1;j <= n + 1;j++)//枚举终点
//		{
//			int min = INF;
//			for (int k = i + 1;k < j;k++)//获得区间j~p的最小费用
//			{
//				int temp = dp[i][k] + dp[k][j] + num[j] - num[i];
//				if (temp < min)
//					min = temp;
//			}
//			if (min != INF)
//				dp[i][j] = min;
//		}
//	cout << dp[0][n + 1] << endl;
//	system("pause");
//	return 0;
//}