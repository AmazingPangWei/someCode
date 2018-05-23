//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct gun
//{
//	int p;
//	int k;
//	vector<int> a;
//};
//
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		gun g[1000];
//		double q[1000];
//		memset(q, 0, sizeof(q));
//		for (int i = 0; i < n; i++)
//		{
//			cin >> g[i].p;
//			cin >> g[i].k;
//			for (int j = 0; j < g[i].k; j++)
//			{
//				int t;
//				cin >> t;
//				g[i].a.push_back(t);
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int t;
//			double power;
//			cin >> t >> power;
//			if (q[t] < power)
//			{
//				q[t] = power;
//			}
//		}
//
//		double MAX = 0;
//		for (int i = 0; i < n; i++)
//		{
//			double sum = 1;
//			for (int j = 0; j < g[i].k; j++)
//			{
//				sum += q[g[i].a[j]];
//			}
//			double ans = double(g[i].p)*sum;
//			MAX = max(MAX, ans);
//		}
//		printf("%.4lf\n",MAX);
//
//	}
//
//	return 0;
//}