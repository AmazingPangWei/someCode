////http://acm.hdu.edu.cn/showproblem.php?pid=2084
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int a[100][100];
//int dp[100][100];
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(a, 0, sizeof(a));
//		memset(dp, 0, sizeof(dp));
//		int n;
//		cin >> n;
//		for (int i = 0;i < n;i++)
//			for (int j = 0;j <= i;j++)
//				cin >> a[i][j];
//		for (int i = 0;i < n;i++)
//			dp[n - 1][i] = a[n - 1][i];
//		for (int i = n - 2;i >= 0;i--)
//			for (int j = 0;j <= i;j++)
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
//		cout << dp[0][0] << endl;
//	}
//	system("pause");
//	return 0;
//}