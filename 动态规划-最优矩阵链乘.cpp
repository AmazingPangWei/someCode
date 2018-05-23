//#include <iostream>
//using namespace std;
//
//
//int dp[1000][1000];
//int d[1000];
//
//int solve(int s, int e)//第s个到第e个
//{
//	int min = 1000000;
//	if (s == e)
//	{
//		dp[s][s] = 0;
//		return dp[s][s];
//	}
//	else if (s + 1 == e)
//	{
//		dp[s][e] = d[s - 1] * d[s] * d[s + 1];
//		return dp[s][e];
//	}
//	else
//	{
//		for (int k = s;k < e;k++)
//		{
//			int temp;
//			temp = solve(s, k) + solve(k + 1, e) + d[s - 1] * d[k] * d[e];
//			if (temp < min)
//				min = temp;
//		}
//	}
//	return min;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0;i <= n;i++)
//		cin >> d[i];
//	cout << solve(1, n) << endl;
//	//	system("pause");
//	return 0;
//}