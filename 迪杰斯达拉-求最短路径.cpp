//#include <iostream>
//#define INF 0x3f3f3f3f
//#define MIN(a,b) a<b?a:b
//using namespace std;
//
//
//int w[5][5]; //不连通用INF表示
//int v[5];
//int d[5];//存对应结点的最短路径
//int main()
//{
//	for(int i=0;i<=3;i++)
//		for (int j = i + 1; j <= 4; j++)
//		{
//			cin >> w[i][j];
//			w[j][i] = w[i][j];
//		}
//	for (int i = 0; i <= 4; i++)
//	{
//		if (i == 0)
//			d[i] = 0;
//		else
//			d[i] = INF;
//	}
//	for (int i = 0; i <= 4; i++)
//	{
//		int x;//x存最小值的结点
//		int min = INF;
//		for(int j=0;j<=4;j++)
//			if (!v[j] && d[j] <= min) //始终获得最小值的结点和权值
//			{
//				min = d[j];
//				x = j;
//			}
//		v[x] = 1;//标记该点
//		for (int k = 0; k <= 4; k++)
//			d[k] = MIN(d[k], d[x] + w[x][k]);
//	}
//	for (int i = 1; i <= 4; i++)
//		cout << d[i] << ' ';
////	system("pause");
//	return 0;
//}