//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[100];
//	int dp[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		dp[i] = 1;
//	}
//	if (n < 30)
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//	int MAX = 0;
//	for (int i = 0; i<n; i++)
//		for (int j = 0; j < i; j++)
//		{
//			if (a[i] >= a[j])
//				dp[i] = max(dp[j] + 1, dp[i]);
//			MAX = max(dp[i], MAX);
//		}
//	if (MAX >= 30)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	//system("pause");
//	return 0;
//}