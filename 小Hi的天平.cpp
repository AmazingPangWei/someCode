//#include <iostream>
//using namespace std;
//int pre[10002];
//
//int find(int x)
//{
//	int r = x;
//	while (pre[r] != r)
//		r = pre[r];//�ҵ������
//
//				   //r����Ϊ���ڵ�
//	int i = x, j;
//	while (i != r)
//	{
//		j = pre[i];//jΪ�м����
//		pre[i] = r;//��r����pre[i]��ʹi���ϼ���Ϊr   ѹ��·��
//		i = j;
//	}
//	return r;
//}
//
//void mix(int a, int b)//��a��b�ļ��Ϻϲ�  b����a
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