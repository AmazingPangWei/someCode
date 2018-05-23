//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//
//
//LL dp[11][101];
//int ans[11][101];
//LL min(LL & b, LL & c, LL & d)
//{
//	LL MIN = min(b, c);
//	MIN = min(MIN, d);
//	return MIN;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> dp[i][j];
//		}
//	//从后向前，一列一列动归
//	for (int i = m-1; i >= 1; i--)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			LL t1, t2, t3;//上中下
//			int index1, index2, index3;
//			if (j == 1)
//			{
//				t1 = dp[n][i + 1]; index1 = n;
//				t2 = dp[j][i + 1]; index2 = j;
//				t3 = dp[j + 1][i + 1]; index3 = j + 1;
//			}
//			else if (j == n)
//			{
//				t1 = dp[j - 1][i + 1]; index1 = j - 1;
//				t2 = dp[j][i + 1]; index2 = j;
//				t3 = dp[1][i + 1]; index3 = 1;
//			}
//			else
//			{
//				t1 = dp[j - 1][i + 1]; index1 = j - 1;
//				t2 = dp[j][i + 1]; index2 = j;
//				t3 = dp[j + 1][i + 1]; index3 = j + 1;
//			}
//			LL index=10000000;
//			LL MIN = min(t1, t2, t3);
//			if (MIN == t1 && index > index1)
//				index = index1;
//			if (MIN == t2 && index > index1)
//				index = index2;
//			if (MIN == t3 && index > index1)
//				index = index3;
//			dp[j][i] = dp[j][i] + MIN;//返回最小的下标
//			ans[j][i] = index;
//		}
//	}
//	/*5 6
//	3 4 1 2 8 6
//	6 1 8 2 7 4
//	5 9 3 9 9 5
//	8 4 1 3 2 6
//	3 7 2 1 2 3*/
//	LL index_ans = 1;
//	for (int i = 2; i <= n; i++)
//		if (dp[index_ans][1] > dp[i][1])
//			index_ans = i;
//	cout << index_ans << ' ';
//	//输出答案
//	LL temp = index_ans;
//	for (int i = 1; i < m; i++)
//	{
//		if (i == m - 1)
//			cout << ans[temp][i] << endl;
//		else
//		{
//			cout << ans[temp][i] << ' ';
//			temp = ans[temp][i];
//		}
//
//	}
//	cout << dp[index_ans][1] << endl;
////	system("pause");
//	return 0;
//}