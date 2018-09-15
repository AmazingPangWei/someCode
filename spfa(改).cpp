////A市有n个交通枢纽，其中1号和n号非常重要，为了加强运输能力，A市决定在1号到n号枢纽间修建一条地铁。
////地铁由很多段隧道组成，每段隧道连接两个交通枢纽。经过勘探，有m段隧道作为候选，两个交通枢纽之间最多只有一条候选的隧道，没有隧道两端连接着同一个交通枢纽。
////现在有n家隧道施工的公司，每段候选的隧道只能由一个公司施工，每家公司施工需要的天数一致。而每家公司最多只能修建一条候选隧道。所有公司同时开始施工。
////作为项目负责人，你获得了候选隧道的信息，现在你可以按自己的想法选择一部分隧道进行施工，请问修建整条地铁最少需要多少天。
////输入格式
////输入的第一行包含两个整数n, m，用一个空格分隔，分别表示交通枢纽的数量和候选隧道的数量。
////第2行到第m + 1行，每行包含三个整数a, b, c，表示枢纽a和枢纽b之间可以修建一条隧道，需要的时间为c天。
////输出格式
////输出一个整数，修建整条地铁线路最少需要的天数。
////样例输入
////6 6
////1 2 4
////2 3 4
////3 6 7
////1 4 2
////4 5 5
////5 6 6
////样例输出
////6
////样例说明
////可以修建的线路有两种。
////第一种经过的枢纽依次为1, 2, 3, 6，所需要的时间分别是4, 4, 7，则整条地铁线需要7天修完；
////第二种经过的枢纽依次为1, 4, 5, 6，所需要的时间分别是2, 5, 6，则整条地铁线需要6天修完。
////第二种方案所用的天数更少。
////评测用例规模与约定
////对于20%的评测用例，1 ≤ n ≤ 10，1 ≤ m ≤ 20；
////对于40%的评测用例，1 ≤ n ≤ 100，1 ≤ m ≤ 1000；
////对于60%的评测用例，1 ≤ n ≤ 1000，1 ≤ m ≤ 10000，1 ≤ c ≤ 1000；
////对于80%的评测用例，1 ≤ n ≤ 10000，1 ≤ m ≤ 100000；
////对于100%的评测用例，1 ≤ n ≤ 100000，1 ≤ m ≤ 200000，1 ≤ a, b ≤ n，1 ≤ c ≤ 1000000。
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
//		for (register int i = 0; i < v[now].size(); i++)
//		{
//			//edge是当前结点遍历的边
//			//now则是当前结点
//			node edge = v[now][i];
//			//注意!条件是"下一个结点的距离大于 边的值或当前结点的距离"时，进行更新
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