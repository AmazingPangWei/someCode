////http://acm.hdu.edu.cn/showproblem.php?pid=2041
//#include <iostream>
//#define MAX 41
//using namespace std;
//
//int dp[MAX];//��ʾ��i��ʼ��M�ж������߷�
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(dp, 0, sizeof(dp));
//		int M;
//		cin >> M;
//		dp[M - 1] = 1;
//		dp[M - 2] = 2;
//		for (int i = M - 3;i >= 1;i--)
//			dp[i] = dp[i + 1] + dp[i + 2];
//		cout << dp[1] << endl;
//	}
//	system("pause");
//	return 0;
//}