////http://www.cnblogs.com/biyeymyhjob/archive/2012/07/31/2615833.html
////����P359
//#include <iostream>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//int v[100];//�Ƿ���Ϊ������ԭ��
//int d[100];//v0����������·��
//int w[100][100];
//int n;
//void Dijkstra()
//{
//	memset(v, 0, sizeof(v));
//	for (int i = 0; i < n; i++) //��ʼ��
//	{
//		if (i == 0)
//			d[i] = 0;
//		else
//			d[i] = INF;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x, m = INF;
//		for (int y = 0; y < n; y++)
//		{
//			if (!v[y] && d[y] <= m) //ȡ��ĿǰȨֵ֮����С�ĵ�
//			{
//				m = d[y];
//				x = y;
//			}
//		}
//		v[x] = 1;//���
//
//		//������x���ڵı�
//		for (int y = 0; y < n; y++)
//		{
//			d[y] = min(d[y], d[x] + w[x][y]);
//		}
//	}
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}