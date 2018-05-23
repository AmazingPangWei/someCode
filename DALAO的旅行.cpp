//#include <iostream>
//#include <string>
//#include <cstring>
//#define INF 0x3f3f3f3f
//#define min(a,b) a>b?b:a
//using namespace std;
//
//int main()
//{
//	int a[1000];
//	int ans[1000];
//	memset(ans, INF, sizeof(ans));
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		ans[i] = a[i];
//	}
//
//	for(int i=m;i<n;i++)
//		for (int j = i-m; j < i; j++)
//		{
//			ans[i] = min(ans[i], a[i] + ans[j]);
//		}
//	cout << ans[n-1] << endl;
//
////	system("pause");
//	return 0;
//}