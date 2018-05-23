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
//	cout<<"*****欢迎使用本系统*****"<<endl;
//	cout<<"请先输入要生成最小生成树的邻接矩阵的大小N"<<endl;
//	
//	int n;
//	cin>>n;
//	
//	while(n<=0)
//	{
//		cout<<"N输入错误，请重新输入!"<<endl;
//		cin>>n; 
//	}
//	
//	cout<<"请输入要使用的邻接矩阵"<<endl;
//	
//	int c[100][100];
//	memset(c, 0, sizeof(c));
//	Node g[100];
//	int temp=0;
//	for(int i=0;i<n;i++)
//		for(int j=0;j<n;j++)
//		{
//			cin>>c[i][j];
//				if(c[i][j]>0 && c[j][i] == 0)
//				{
//					g[temp].v1=i;
//					g[temp].v2=j;
//					g[temp].e=c[i][j];
//					temp++;	
//				}
//		}
//	sort(g,g+temp,comp);
//	
//	//初始化并查集 
//	for(int i=0;i<n;i++)
//		pre[i]=i;
//	
//	int r[100][100];//用该矩阵来存储最小生成树 
//	memset(r, 0, sizeof(r));
//	//开始最小生成树的计算
//	for(int i=0;i<temp;i++)
//	{
//		int v1,v2;
//		v1=find(g[i].v1);
//		v2=find(g[i].v2);
//		if(v1!=v2) //不在同一个集合,说明没有形成环路 
//		{
//			mix(v1,v2);
//			r[g[i].v1][g[i].v2] = g[i].e;
//			r[g[i].v2][g[i].v1] = g[i].e;
//		}			
//	} 
//	cout << "该图的最小生成树如下:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << r[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
