////���ϣ�https://blog.csdn.net/athenaer/article/details/8265234
////��Ŀ��https://nanti.jisuanke.com/t/25093
////��dp[i][j]Ϊ��i����Ϊj�������Ļ�������
////(1) i<jΪ�����ܳ��ֵ������dp[i][j] = 0��
////(2) ��i = j����һ�������i���Ի���Ϊi��1֮�ͣ�dp[i][j] = 1��
////(3) �������Է�Ϊ���ࣺ
////��һ��: n ���в����� 1 �ķַ���Ϊ��֤ÿ�ݶ� >= 2���������ó� k �� 1 ��
////��ÿһ�ݣ�Ȼ���ٰ�ʣ�µ� n - k �ֳ� k �ݼ��ɣ��ַ��� : dp[n - k][k]
////�ڶ��� : n ����������һ��Ϊ 1 �ķַ����������ǳ�һ�� 1 ��Ϊ������1�ݣ�ʣ
////�µ� n - 1 �ٷֳ� k - 1 �ݼ��ɣ��ַ��У�dp[n - 1][k - 1]
//#include <iostream>
//using namespace std;
//
//long long dp[301][301];
//long long n, k;
//void solve()
//{
////��dp[i][j]Ϊ��i����Ϊj�������Ļ�������
//	for (long long i = 1; i <= n; i++)
//	{
//		for (long long j = 1; j <= n; j++)
//		{
//			if (i < j)
//				dp[i][j] = 0;
//			else if (i == j)
//				dp[i][j] = 1;
//			else
//			{
//				//��1����� + ��1�����
//				dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j];
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	solve();
//	long long ans = 0;
//	for (long long i = 1; i <= k; i++)
//	{
//		ans += dp[n][i];
//	}
//	cout << ans << endl;
////	system("pause");
//	return 0;
//}