//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
////存储边的信息
//struct Node
//{
//	int v1,v2;
//	int e;	
//};
//
//bool comp(Node a,Node b)
//{
//	return a.e<b.e;
//}
//
//int pre[100];//并查集
////利用并查集来判断是否会形成环
//int find(int x)
//{
//	int r=x;
//	while(pre[r]!=r) //返回根节点 
//		r=pre[r];
//	
//	//r目前为根节点 
//	//路径压缩
//	int i=x;
//	while(pre[i]!=i)
//	{
//		int j=pre[i];
//		pre[i]=r;
//		i=j;
//	} 
//	return r;
//} 
//
//void mix(int x,int y) //把y归入x 
//{
//	int a=find(x),b=find(y);
//	pre[b]=a;
//}
//
//int main()
//{
//	int c,n,m;
//	while (cin >> c >> m >> n)
//	{
//		//m为道路数目
//		Node g[10000];
//		for (int i = 0; i < m; i++)
//		{
//			int v1, v2, h;
//			cin >> v1 >> v2 >> h;
//			g[i].v1 = v1;
//			g[i].v2 = v2;
//			g[i].e = h;
//		}
//		sort(g, g + m, comp);
//		for (int i = 0; i < n; i++)
//			pre[i] = i;
//		int cost = 0;
//		//开始最小生成树的计算
//		for (int i = 0; i < m; i++)
//		{
//			int v1, v2;
//			v1 = find(g[i].v1);//由点来判断是否形成了环
//			v2 = find(g[i].v2);
//			if (v1 != v2) //不在同一个集合,说明没有形成环路 
//			{
//				mix(v1, v2);
//				cost += g[i].e;
//			}
//		}
//		if (cost > c)
//			cout << "No" << endl;
//		else
//			cout << "Yes" << endl;
//	}
//	system("pause");
//	return 0;
//}
