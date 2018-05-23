//#include<iostream>
//#define max(a,b) a>b?a:b
//using namespace std;
//int dp[6][6], a[6][6];
//void print()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//			cout << dp[i][j];
//		cout << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//		for (j = 1; j <= 4; j++)
//			cin >> a[i][j];
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			//int x = max(dp[i - 1][j], dp[i][j - 1]);
//			//dp[i][j] = a[i][j] + x;
//			//int x = max(dp[i - 1][j], dp[i][j - 1]);
//			dp[i][j] = a[i][j] + (dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]);
//			//a>b?a:b
//			//		   cout<<x;
//		}
//	}
//	cout << dp[4][4] << endl;
//	system("pause");
//	return 0;
//}