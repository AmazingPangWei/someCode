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
//	cout<<"*****��ӭʹ�ñ�ϵͳ*****"<<endl;
//	cout<<"��������Ҫ������С���������ڽӾ���Ĵ�СN"<<endl;
//	
//	int n;
//	cin>>n;
//	
//	while(n<=0)
//	{
//		cout<<"N�����������������!"<<endl;
//		cin>>n; 
//	}
//	
//	cout<<"������Ҫʹ�õ��ڽӾ���"<<endl;
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
//	//��ʼ�����鼯 
//	for(int i=0;i<n;i++)
//		pre[i]=i;
//	
//	int r[100][100];//�øþ������洢��С������ 
//	memset(r, 0, sizeof(r));
//	//��ʼ��С�������ļ���
//	for(int i=0;i<temp;i++)
//	{
//		int v1,v2;
//		v1=find(g[i].v1);
//		v2=find(g[i].v2);
//		if(v1!=v2) //����ͬһ������,˵��û���γɻ�· 
//		{
//			mix(v1,v2);
//			r[g[i].v1][g[i].v2] = g[i].e;
//			r[g[i].v2][g[i].v1] = g[i].e;
//		}			
//	} 
//	cout << "��ͼ����С����������:" << endl;
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
