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
//	vector<int> v[100];//��vectorΪԭ�ͣ������ڽӱ� Ȩֵ��Ϊ1��������
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
//		int x;//��¼��С��λ��
//		int MIN = INF;//��¼��Сֵ
//		for (int j = 1; j <= n; j++)
//		{
//			if (!vis[j] && d[i] <= MIN)
//			{
//				x = j;
//				MIN = d[i];
//			}
//		}
//		vis[x] = 1; //ȷ���õ�
//		for (int k = 0; k < v[x].size(); k++)
//		{
//			d[v[x].at(k)] = min(d[v[x].at(k)], d[x] + 1);
//		}
//
//	}
//	system("pause");
//	return 0;
//}