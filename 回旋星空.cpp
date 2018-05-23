//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long LL;
//
//map<long long, int> table;
//set<int> SET[1100];
//struct point
//{
//	LL x, y;
//};
//
//point t[1000];
//long long ans = 0;
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		table.clear();
//		ans = 0;
//		int n;
//		scanf("%d", &n);
//
//		for (int i = 0; i < n; i++)
//			scanf("%lld%lld", &t[i].x, &t[i].y);
//		if (n == 1 || n == 2)
//		{
//			printf("WA\n");
//			continue;
//		}
//		int sum = 1;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				long long temp = (t[i].x - t[j].x)*(t[i].x - t[j].x) + (t[i].y - t[j].y)*(t[i].y - t[j].y);
//				if (table[temp] != 0 && (SET[table[temp]].find(i)!= SET[table[temp]].end() || SET[table[temp]].find(j) != SET[table[temp]].end()))
//				{
//					ans += 2;
//					SET[table[temp]].insert(i);
//					SET[table[temp]].insert(j);
//				}
//				else
//				{
//					table[temp] = sum;
//					sum++;
//					SET[table[temp]].insert(i);
//					SET[table[temp]].insert(j);
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//
//	system("pause");
//	return 0;
//}