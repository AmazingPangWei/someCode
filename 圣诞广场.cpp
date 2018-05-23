////迪杰斯达拉算法求最短路径
//#include <iostream>
//#include <cstdio>
//#define max(a,b) a>b?a:b
//#define min(a,b) a>b?b:a
//#define INF 0x3f3f3f3f
//using namespace std;
//int N, M;
//int a[1000][1000];
//int W[1000][1000];
//int use[1000][1000];
//int d[1000];
//int s[1000];
//int v[1000];
//int t[1000];
//
//int main()
//{
//	while (cin >> N >> M)
//	{
//		memset(a, INF, sizeof(a));
//		memset(d, INF, sizeof(d));
//		memset(W, 0, sizeof(W));
//		memset(use, 0, sizeof(use));
//		memset(s, 0, sizeof(s));
//		memset(v, 0, sizeof(v));
//		memset(t, 0, sizeof(t));
//		d[1] = 0;
//		s[1] = 1;
//		for (int i = 1; i <= M; i++)
//		{
//			int x, y, w;
//			cin >> x >> y >> w;
//			a[x][y] = w;
//			a[y][x] = w;
//			W[x][y] = w;
//			W[y][x] = w;
//		}
//		for (int i = 1; i <= M; i++)
//		{
//			int MIN = INF ;
//			int MAX = 0;
//			int y;
//			int temp;
//			for (int j = 1; j <= M; j++)
//			{
//				if ( v[j] == 0 && d[j] <= MIN)
//				{
//					MIN = d[j];
//					y = j;
//				}
//				if (t[j] == 0 && s[j] >= MAX)
//				{
//					MAX = s[j];
//					temp = j;
//				}
//			}
//			v[y] = 1;
//			t[temp] = 1;
//			s[1] = 0;
//			for (int i = 1; i <= M; i++)
//				d[i] = min(d[i], d[y] + a[y][i]);
//			for (int i = 1; i <= M; i++)
//				if (W[temp][i] != 0 && (!use[temp][i] || !use[i][temp]))
//				{
//					s[i] = max(s[i], s[temp] + W[temp][i]);
//					use[temp][i] = 1;
//					use[i][temp] = 1;
//				}
//		}
//		cout << d[M] << endl;
//		cout << s[M] << endl;
//	}
//
////	system("pause");
//	return 0;
//}