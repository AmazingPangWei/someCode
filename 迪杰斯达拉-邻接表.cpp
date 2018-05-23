//#include <iostream>
//#include <vector>
//#define INF 0x3f3f3f3f
//#define min(a,b) a>b?b:a
//using namespace std;
//
//
//int d[100];
//int vis[100];
//int main()
//{
//	vector<int> v[100];//以vector为原型，构建邻接表 权值均为1！！！！
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//			d[i] = 0;
//		else
//			d[i] = INF;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int x;//记录最小点位置
//		int MIN = INF;//记录最小值
//		for (int j = 1; j <= n; j++)
//		{
//			if (!vis[j] && d[i] <= MIN)
//			{
//				x = j;
//				MIN = d[i];
//			}
//		}
//		vis[x] = 1; //确定该点
//		for (int k = 0; k < v[x].size(); k++)
//		{
//			d[v[x].at(k)] = min(d[v[x].at(k)], d[x] + 1);
//		}
//
//	}
//	system("pause");
//	return 0;
//}