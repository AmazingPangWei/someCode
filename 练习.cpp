﻿//#include <iostream>
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
//		for (register int i = 0; i < v[now].size(); i++)
//		{
//			//edge是当前结点遍历的边
//			//now则是当前结点
//			node edge = v[now][i];
//			if (max(edge.value, dis[now]) < dis[edge.to])
//			{
//				dis[edge.to] = max(edge.value, dis[now]);
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
//	for (register int i = 0; i < m; i++)
//	{
//		node edge;
//		int x, y, z;
//		cin >> x >> y >> z;
//		edge.to = y;
//		edge.value = z;
//		v[x].push_back(edge);
//		edge.to = x;
//		edge.value = z;
//		v[y].push_back(edge);
//	}
//	init();
//	spfa();
//	cout << dis[n] << endl;
//	//system("pause");
//	return 0;
//}