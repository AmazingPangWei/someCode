////nyoj 201
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int dp[1000];
//int dp1[1000];
//
//struct point
//{
//	int x, y;
//};
//
//bool comp(point a, point b)
//{    
//	if (a.x == b.x)
//		return a.y < b.y;
//	return a.x < b.x;
//}   
//    
//int solve(point *p, int n)
//{   
//	dp[0] = 1;
//	int MAX = 0;
//	for (int i = 1;i < n;i++)
//	{
//		dp[i] = 1;
//		for (int j = 0;j < i;j++)
//		{
//			if (p[i].y > p[j].y && dp[i] < dp[j] + 1)
//				dp[i] = dp[j] + 1;
//			if (MAX < dp[i])
//				MAX = dp[i];
//		}
//	}
//	return MAX;
//}   
//
//int solve1(point *p, int n)
//{
//	dp1[0] = 1;
//	int MAX = 0;
//	for (int i = 1;i < n;i++)
//	{
//		dp1[i] = 1;
//		for (int j = 0;j < i;j++)
//		{
//			if (p[i].y < p[j].y && dp1[i] < dp1[j] + 1)
//				dp1[i] = dp1[j] + 1;
//			if (MAX < dp1[i])
//				MAX = dp1[i];
//		}
//	}
//	return MAX;
//}
//
//int main()
//{
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		memset(dp, 0, sizeof(dp));
//		memset(dp1, 0, sizeof(dp1));
//		int n;
//		cin >> n;
//		point *p;
//		p = new point[n];
//		for (int i = 0;i < n;i++)
//			cin >> p[i].x >> p[i].y;
//		sort(p, p + n, comp);
//		int MAX = solve(p,n);
//		int MAX1 = solve1(p,n);
//		cout << max(MAX, MAX1) << endl;
//		delete[]p;
//	}
//
////	system("pause");
//	return 0;
//}