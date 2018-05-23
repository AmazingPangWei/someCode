//#include <iostream>
//#include <cstring>
//#define min(a,b) a>b?b:a
//#define INF 0x3f3f3f3f
//using namespace std;
//
//
//int w[1000][1000];
//int main()
//{
//	int n, m;
//	memset(w, INF, sizeof(w));
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		w[x][y] = 1;
//		w[y][x] = 1;
//	}
//	int p, q;
//	cin >> p >> q;
//	for (int k = 1; k <= n; k++)
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				w[i][j] = min(w[i][j], w[i][k] + w[k][j]);
//	if (w[p][q] >= INF)
//	{
//		cout << 0 << endl;
//	}
//	else
//		cout << w[p][q] - 1 << endl;
//
////	system("pause");
//	return 0;
//}