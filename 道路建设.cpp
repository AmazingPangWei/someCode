//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
////�洢�ߵ���Ϣ
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
//int pre[100];//���鼯
////���ò��鼯���ж��Ƿ���γɻ�
//int find(int x)
//{
//	int r=x;
//	while(pre[r]!=r) //���ظ��ڵ� 
//		r=pre[r];
//	
//	//rĿǰΪ���ڵ� 
//	//·��ѹ��
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
//void mix(int x,int y) //��y����x 
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
//		//mΪ��·��Ŀ
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
//		//��ʼ��С�������ļ���
//		for (int i = 0; i < m; i++)
//		{
//			int v1, v2;
//			v1 = find(g[i].v1);//�ɵ����ж��Ƿ��γ��˻�
//			v2 = find(g[i].v2);
//			if (v1 != v2) //����ͬһ������,˵��û���γɻ�· 
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
