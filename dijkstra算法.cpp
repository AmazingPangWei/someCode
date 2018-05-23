////http://www.cnblogs.com/biyeymyhjob/archive/2012/07/31/2615833.html
////紫书P359
//#include <iostream>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int v[100];//是否被作为检索的原点
//int d[100];//v0到各点的最短路径
//int w[100][100];
//int n;
//void Dijkstra()
//{
//	memset(v, 0, sizeof(v));
//	for (int i = 0; i < n; i++) //初始化
//	{
//		if (i == 0)
//			d[i] = 0;
//		else
//			d[i] = INF;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x, m = INF;
//		for (int y = 0; y < n; y++)
//		{
//			if (!v[y] && d[y] <= m) //取出目前权值之和最小的点
//			{
//				m = d[y];
//				x = y;
//			}
//		}
//		v[x] = 1;//标记
//
//		//查找与x相邻的边
//		for (int y = 0; y < n; y++)
//		{
//			d[y] = min(d[y], d[x] + w[x][y]);
//		}
//	}
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}