//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//
//int n;
//int a[11][100010];
//
//int max(int a, int b, int c)
//{
//	int MAX = a;
//	if (b > MAX)
//		MAX = b;
//	if (c > MAX)
//		MAX = c;
//	return MAX;
//}
//
//int main()
//{
//	while (scanf("%d", &n) && n != 0)
//	{
//		memset(a, 0, sizeof(a));
//		int time;//记录时间
//		int max_time = 0;
//		int t;
//		int	MAX = 0;
//		for (int i = 1;i <= n;i++)
//		{
//			scanf("%d", &t);
//			scanf("%d", &time);
//			if (time > max_time)
//				max_time = time;
//			a[t][time]++;
//		}
//		for (int i = 0;i <= 10;i++)
//		{
//			if (a[i][1] > 0 && (i < 4 || i>6))
//				a[i][1] = 0;
//			else if (a[i][1] > 0 && i >= 4 && i <= 6)
//				if (MAX < a[i][1])
//					MAX = a[i][1];
//		}
//		for(int i=2;i<= max_time;i++)
//			for (int j = 0;j <= 10;j++)
//			{
//					if (j >= 1 && j <= 9)
//					{
//						a[j][i] = max(a[j - 1][i - 1], a[j + 1][i - 1], a[j][i - 1]) + a[j][i];//选择是从左边来，还是从右边来
//					}
//					if (j == 0)
//						a[j][i] = max(a[j][i - 1], a[j + 1][i - 1]) + a[j][i];
//					if (j == 10)
//						a[j][i] = max(a[j - 1][i - 1], a[j][i - 1]) + a[j][i];
//					if (MAX < a[j][i])
//						MAX = a[j][i];
//			}
//		printf("%d\n", MAX);
//	}
//
////	system("pause");
//	return 0;
//}