//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int pre[1010];
//
//void init(int n)
//{
//	for (int i = 1; i <= n; i++)
//		pre[i] = i;
//}
//
//int find(int x)
//{
//	int r = x;
//	while (pre[r] != r)
//		r = pre[r];
//	//ѹ��
//	int i = x, j;
//	while (pre[i] != r)
//	{
//		j = pre[i];//������һ�����
//		pre[i] = r;//ѹ����ǰ���
//		i = j;//׼��ѹ����һ�����
//	}
//	return r;
//}
//
//void mix(int a, int b)
//{
//	int x = find(a), y = find(b);
//	if (x != y)
//	{
//		pre[y] = x;
//	}
//}
//
//int main()
//{
//	int n;
//	while (cin >> n && n != 0)
//	{
//		int m;
//		cin >> m;
//		memset(pre, 0, sizeof(pre));
//		init(n);
//		for (int i = 0; i < m; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//			mix(a, b);
//		}
//		int ans = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (pre[i] == i)
//			{
//				ans++;
//			}
//		}
//		cout << ans - 1 << endl;
//	}
////	system("pause");
//	return 0;
//}