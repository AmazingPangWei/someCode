//#include <iostream>
//#include <cstring>
//#define max(a,b) a>b?a:b
//using namespace std;
//
//int a[10000];
//int dp[10000];
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int MAX = 0;
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			dp[i] = 1;
//		}
//		for(int i=0;i<n;i++)
//			for (int j = 0; j < i; j++)
//			{
//				if(a[i]>=a[j])
//					dp[i] = max(dp[j] + 1, dp[i]);
//				MAX = max(dp[i], MAX);
//			}
//		cout << MAX << endl;
//	}
////	system("pause");
//	return 0;
//}