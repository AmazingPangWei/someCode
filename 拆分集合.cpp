//#include <iostream>
//using namespace std;
//
//
//long long dp[40][400];
////���������Ӽ���������Ϊsumʱ������{0,1,2...,i-1,i}�п��ṩ��ѡȡ����
//// i>jʱ���޷�+i  dp[i][j]=dp[i-1][j]
//// i<jʱ������д�룬Ҳ���Բ�д��dp[i][j]=dp[i-1][j]+dp[i-1][j-i]
//int main()
//{
//	long long n;
//	cin >> n;
//	if ((n*(n + 1)) % 4 != 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	long long sum = (n*(n + 1)) / 4;
//	for (long long i = 0; i < 40; i++)
//		dp[0][i] = (i == 0);
//	for (long long i = 1; i < 40; i++)
//	{
//		for (long long j = 0; j <= sum; j++)
//		{
//			if (i > j)
//				dp[i][j] = dp[i - 1][j];
//			else
//				dp[i][j] = dp[i - 1][j - i] + dp[i - 1][j];
//		}
//	}
//	cout << dp[n][sum]/2 << endl;
////	system("pause");
//	return 0;
//}