//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//#define Max 0x3f3f3f3f
//struct node
//{
//	int to, value;
//};
//
//vector<node> v[100005];
//queue<int> q;
//bool isQueue[100005];//是否在队内
//int dis[100005];
//
//void init()
//{
//	q.push(1);
//	isQueue[1] = 1;
//	memset(dis, Max, sizeof(dis));
//	dis[1] = 0;
//}
//void spfa()
//{
//	while (!q.empty())
//	{
//		int now = q.front();
//		q.pop();
//		isQueue[now] = 0;
//
//		//遍历当前结点的边
//		for (int i = 0; i < v[now].size(); i++)
//		{
//			//edge是当前结点遍历的边
//			//now则是当前结点
//			node edge = v[now][i];
//			if (dis[now] + edge.value < dis[edge.to])
//			{
//				dis[edge.to] = dis[now] + edge.value;
//				//判断是否在队里面，不在则继续入队
//				if (!isQueue[edge.to])
//				{
//					q.push(edge.to);
//					isQueue[edge.to] = 1;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		node edge;
//		int x;
//		cin >> x;
//		cin >> edge.to >> edge.value;
//		v[x].push_back(edge);
//	}
//	init();
//	spfa();
//	for (int i = 1; i <= n; i++)
//		cout << dis[i] << ' ';
//	system("pause");
//	return 0;
//}