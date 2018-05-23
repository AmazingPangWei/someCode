//#include <iostream>
//using namespace std;
//int pre[10002];
//
//int find(int x)
//{
//	int r = x;
//	while (pre[r] != r)
//		r = pre[r];//找到根结点
//
//				   //r现在为根节点
//	int i = x, j;
//	while (i != r)
//	{
//		j = pre[i];//j为中间变量
//		pre[i] = r;//将r赋予pre[i]，使i的上级就为r   压缩路径
//		i = j;
//	}
//	return r;
//}
//
//void mix(int a, int b)//把a和b的集合合并  b并于a
//{
//	int fx = find(a), fy = find(b);
//	if (fx != fy)
//		pre[fy] = fx;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		memset(pre, 0, sizeof(pre));
//		int n,m;
//		cin >> n >> m;
//		pre[1] = 1;
//		for (int i = 0; i < m; i++)
//		{
//			int x, u, v;
//			cin >> x >> u >> v;
//			if (x == 0)
//				mix(u, v);
//			else
//			{
//				if(pre[u] != 0 && pre[v] ==0)
//
//
//			}
//		}
//
//	}
//
//
//	system("pause");
//	return 0;
//}