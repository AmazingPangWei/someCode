////https://www.nowcoder.net/acm/contest/76/a
////���ö���ͼ����
//#include <iostream>
//#include <cstring>
//#define N 1250
//using namespace std;
//
////ע�����ͼ��С������
//int G[N][N];//����ͼ
//int g[N][N];
//bool used[N];
//int link[N];
//int U, V;
//
//bool dfs(int x)
//{
//	for (int i = 1; i <= V; i++)
//	{
//		if (G[x][i] && used[i] == 0)
//		{
//			used[i] = 1;
//			if (link[i] == 0 || dfs(link[i]))
//			{
//				link[i] = x;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	int T;
//	cin >> T;
//	int time = 0;
//	while (time != T)
//	{
//		int n;
//		cin >> n;
//		getchar();
//		memset(g, 0, sizeof(g));
//		memset(G, 0, sizeof(G));
//		memset(used, 0, sizeof(used));
//		memset(link, 0, sizeof(link));
//
//		int u = 0, v = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				char c;
//				cin >> c;
//				if (c == '#')//������ż��ͼ��������ý�����ͼ
//				{
//					if ((i + j) % 2 != 0)
//						g[i][j] = ++u;//Ϊ�õ��ţ���ͳ������
//					else
//						g[i][j] = ++v;//Ϊ�õ��ţ���ͳ������
//				}
//			}
//			getchar();
//		}
//		U = u;
//		V = v;
//		for (int i = 0; i<n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (g[i][j] && (i + j) % 2 == 1)//������ż������ͼ
//				{
//					//������������������
//					if (g[i - 1][j] && (i - 1)>=0)
//						G[g[i][j]][g[i - 1][j]] = 1;
//					if (g[i + 1][j]&& (i + 1)<=(n-1))
//						G[g[i][j]][g[i + 1][j]] = 1;
//					if (g[i][j - 1]&& (j-1)>=0)
//						G[g[i][j]][g[i][j - 1]] = 1;
//					if (g[i][j + 1]&&(j+1)<=(n-1))
//						G[g[i][j]][g[i][j + 1]] = 1;
//				}
//			}
//		int res = 0;
//		for (int i = 1; i <= U; i++)
//		{
//			memset(used, 0, sizeof(used));
//			if (dfs(i))
//				res++;
//		}
//		time++;
//		printf("Case %d: %d\n", time, res);
//	}
//	system("pause");
//	return 0;
//}